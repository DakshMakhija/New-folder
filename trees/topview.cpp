
// Given a binary tree , print the nodes in left to right manner as visible from above the tree

// Input Format
// Level order input for the binary tree will be given.

// Constraints
// No of nodes in the tree can be less than or equal to 10^7

// Output Format
// A single line containing space separated integers representing the top view of the tree

// Sample Input
// 1 2 3 4 5 6 -1 -1 -1 -1 -1 -1 -1
// Sample Output
// 4 2 1 3
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \       /
//    4       5     6
// When viewed from the top , we would see the nodes 4, 2, 1 and 3.











#include<bits/stdc++.h>
using namespace std;
class Treenode{
	public:
	Treenode*left;
	Treenode*right;
    int data;
    int hd;

	Treenode(int d){
        this->data=d;
		this->left=NULL;
		this->right=NULL;

	}
};
Treenode*buildtree(){
	queue<Treenode*>q;
	int d;
	cin>>d;
	Treenode*root=new Treenode(d);
    q.push(root);
	while(!q.empty()){
        Treenode*t=q.front();
        q.pop();
		int a,b;
		cin>>a>>b;
		if(a!=-1){
			t->left=new Treenode(a);
			q.push(t->left);
		}
		if(b!=-1){
			t->right=new Treenode(b);
				q.push(t->right);
			
		}
        
	}
    return root;
}
void topview(Treenode*root){
    if(root==NULL){
        return;
    }
    queue<Treenode*>q;
    map<int ,int> m;
    int hd=0;
    root->hd=hd;

    q.push(root);
    while(q.size()){
        hd=root->hd;
        if(m.count(hd)==0){
            m[hd]=root->data;
        }
        if(root->left){
            root->left->hd=hd-1;
            q.push(root->left);
        }
    if(root->right)
    {
        root->right->hd=hd+1;
        q.push(root->right);
        }
        q.pop();
        root=q.front();
          
            }
            for(auto i=m.begin();i!=m.end();i++){
                cout<<i->second<<" ";
            }

    

}
int main() {
	Treenode*root=buildtree();
    topview(root);
    return 0;
    }