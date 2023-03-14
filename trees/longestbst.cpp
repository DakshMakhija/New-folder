#include<iostream>
#include<vector>
#include<climits>
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
bool isBST(node *root, int minV = INT_MIN, int maxV = INT_MAX)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->data >= minV && root->data <= maxV 
	&& isBST(root->left, minV, root->data)
    && isBST(root->right, root->data, maxV))
    {
        return true;
    }
    return false;
}

int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int sizeOfMaxBST(node *root)
{
    int maxSize = 0;
    if (root == NULL)
    {
        return 0;
    }
    if (isBST(root))
    {
        maxSize = max(maxSize, count(root));
    }
    return max(maxSize, max(sizeOfMaxBST(root->left), sizeOfMaxBST(root->right)));
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
    
	int size = sizeOfMaxBST(root);
	cout<<size;

    return 0;
}