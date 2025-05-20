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
  void leftleaf(TreeNode*root, int& sum, int isleft){
    if(root->left ==NULL&& root->right==NULL){
    
    if(isleft){
        sum=sum+root->val;
    }
    return ;
    }

    if(root->left){
            leftleaf(root->left,sum,1);
        }
        if(root->right){
            leftleaf(root->right,sum,0);
        }
    }

    int sumOfLeftLeaves(TreeNode* root) {
       if(root==NULL){
            return 0;
        }
        int sum=0;
        leftleaf(root,sum,0);
        return sum;
    }
};