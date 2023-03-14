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

int tree_height(node* root) {
    if (root == NULL) 
        return 0;
    else {
       int left_height = tree_height(root->left);
       int right_height = tree_height(root->right);
        return max(left_height, right_height) + 1;
	}
}


void CurrentLevel(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 0)
        cout << root->data<<" ";
    else if (level > 0) {
        CurrentLevel(root->left, level - 1);
        CurrentLevel(root->right, level - 1);
    }
}
void levelorderPrint(node* root){
	   int height = tree_height(root);
    for (int i=0; i<height; i++) {
       CurrentLevel (root, i);
	   cout<<endl;
    }
}

int main() {
   node*root=buildtree();
   levelorderPrint(root);

}