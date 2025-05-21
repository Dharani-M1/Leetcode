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
    bool isbst(TreeNode * curr,long min,long max){

        if(!curr)return true;

        if(curr->val<=min||curr->val>=max)return false;

        return isbst(curr->left,min,curr->val)&&isbst(curr->right,curr->val,max);

    }

    bool isValidBST(TreeNode* root) {
      return isbst(root,LONG_MIN,LONG_MAX);
        
    }

};