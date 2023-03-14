#include <iostream>
using namespace std;
class node
{
    public:
    string data;
    node*left;
    node*right;
    node(string d)
    {
       this->data=d;
        left=NULL;
        right=NULL;
    }

};
node*buildtree()
{
    string s;
    cin>>s;
    if(s=="false")
    {
           return NULL;
    }
    if(s=="true")
    {
         string d;
         cin>>d;
         node*root=new node(d);
        root->left=buildtree();
        root->right=buildtree();
        return root;
    }
    node*root=new node(s);
        root->left=buildtree();
        root->right=buildtree();
       return root;
}
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);
    return max(lh,rh)+1;
}
void level(node*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==0)
    {
        cout<<root->data<<" ";
    }
    level(root->left,k-1);
    level(root->right,k-1);
}
void level1(node*root,int k)
{
    if(root==NULL)
    {
        return;
    }

    if(k==0)
    {
        cout<<root->data<<" ";
    }
    level1(root->right,k-1);
    level1(root->left,k-1);
}
void zigzag(node*root)
{
    int h=height(root);
    for(int i=0;i<h;i++)
    {
        if(i%2==0)
        {
            level(root,i);
    
        }
        else if(i%2!=0)
        {
          level1(root,i);
          
        }
    }
}

int main() {
   node*root=buildtree();
   zigzag(root);

}
