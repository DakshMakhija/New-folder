// Sample Input
// 1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
// Sample Output
// 1 3 6
// Explanation
// The tree looks like

//              1
//           /      \
//        2           3
//     /     \           \
//    4       5           6
// When viewed from the left , we would see the nodes 1,3 and 6.



#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};
TreeNode* buildTree(){
        queue <TreeNode*> q;
        int data;
		cin>>data;
        TreeNode *root = new TreeNode(data);
        q.push(root);
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            int l,r;
            cin>>l>>r;
            if(l!=-1){
                temp->left = new TreeNode(l);
                q.push(temp->left);
            }
            if(r!=-1){
                temp->right = new TreeNode(r);
                q.push(temp->right);
            }
        }
        return root;
}
class Solution{
public:
    vector <int> v;
    int max_level = -1;

    void helper(TreeNode *root, int level){
        if(root == NULL)
            return;
        if(level > max_level){
            max_level = level;
            v.push_back(root->val);
        }
        helper(root->right, level+1);
        helper(root->left, level+1);
    }
    vector <int> rightSideView(TreeNode *root){
        helper(root, 0);
        return v;
    }

};
int main(){
    TreeNode *root = buildTree();
    Solution v;
    vector <int> ans = v.rightSideView(root);

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;

}