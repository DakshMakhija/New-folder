#include<bits/stdtr1c++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left,*right;
    node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

vector<int>ans;
 

static int idx=0;
node* PreIn(vector<int> &inorder,vector<int> &preorder,int s,int e)
{
    if(s>e)
    {
        return NULL;
    }
	int k=-1;
    int rootdata=preorder[idx];
    node* root=new node(rootdata);
    for(int i=s;i<=e;i++)
    {
        if(rootdata==inorder[i])
        {
            k=i;
            break;
        }
    }
    idx++;
    root->left=PreIn(inorder,preorder,s,k-1);
    root->right=PreIn(inorder,preorder,k+1,e);
    return root;
}
void kdistancenode(node* root, int k)
{
	
   if(root==NULL||k<0)
     return ;
    if(k==0)   
    {
	  ans.push_back(root->data);
    return;
    }
    kdistancenode(root->left,k-1);
    kdistancenode(root->right,k-1);
}

int kdistance(node* root, node* target , int k)
{
   if(root==NULL)
    return -1;

    if(root->data==target->data)
       {
             kdistancenode(root,k);
             return 0;
       }
	int d=kdistance(root->left,target,k);
    if(d!=-1)
    {
        if(d+1==k)
        {
             ans.push_back(root->data);
        }
        else
        {
            kdistancenode(root->right,k-d-2);
        }
        return d+1;
    }

    
    int d1=kdistance(root->right,target,k);
    if(d1!=-1)
    {
        if(d1+1==k)
        {
             ans.push_back(root->data);
        }
        else
        {
            kdistancenode(root->left,k-d1-2);
        }
        return d1+1;
    }
    return -1;
}
  vector<int> distanceK(node* root, node* src, int k) {
       kdistance(root,src,k);
        return ans;
    }
int main()
{
    int n;
	cin>>n;
    vector<int> preorder(n);
    for(int i=0;i<n;i++) cin>>preorder[i];
    vector<int> inorder(n);
    for(int i=0;i<n;i++) cin>>inorder[i];

     node* root=PreIn(inorder,preorder,0,n-1);
    int t;
	cin>>t;
	while(t--){
   
     int d,k;
	 cin>>d>>k;
	 ans.clear();
	 node* target = new node(d);
   distanceK(root,target,k);
   if(ans.size()==0){
	   cout<<"0"<<" ";
   }
   sort(ans.begin(),ans.end());
	 for(auto x : ans){
		 cout<<x<<" ";
	 }
	 cout<<endl;
	 
	}
   
    return 0;
}