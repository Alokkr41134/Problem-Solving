/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL)  return 1;

        int x=countNodes(root->left);
        int y=countNodes(root->right);

        return 1+x+y; // root 4,5 2 ko 1 or 1 dega or 1 khud ka  tb 3 ho jyaga
    }
};