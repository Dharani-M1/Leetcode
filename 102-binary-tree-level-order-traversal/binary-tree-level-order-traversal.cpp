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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int>res;
            if(root==NULL)return result;
            while(n){
                TreeNode * temp=q.front();
                q.pop();

                res.push_back(temp->val);
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                n--;
            }
            result.push_back(res);

        }
        return result;
    }
};