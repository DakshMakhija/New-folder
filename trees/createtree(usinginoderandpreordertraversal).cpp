#include<iostream>
#include<vector>
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
void po(node* root){
if (root==NULL) {
        return;
    }
	if (root->left==NULL){
		cout<<"END => ";
	}
	else{
		cout<<root->left->data<<" => ";
	}
	cout<< root->data ;
	if (root->right==NULL){
		cout<<" <= END"<<endl;
	}
	else{
		cout<<" <= "<<root->right->data<<endl;
	}
	po(root->left);
	po(root->right);


}

int main()
{
    int n;
	cin>>n;
    vector<int> preorder(n);
    for(int i=0;i<n;i++) cin>>preorder[i];

    int m;
	cin>>m;
    vector<int> inorder(m);
    for(int i=0;i<m;i++) cin>>inorder[i];

    node* root=PreIn(inorder,preorder,0,n-1);
    
	po(root);

    return 0;
}