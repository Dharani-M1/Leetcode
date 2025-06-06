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
    int minDepth(TreeNode* root) {
         queue<TreeNode*>q;
        q.push(root);
        int count=1;

        while(!q.empty()){
            int n=q.size();
            vector<int>res;
            if(root==NULL)return 0;
            while(n){
                TreeNode * temp=q.front();
                q.pop();
                res.push_back(temp->val);
                 if(temp->left==NULL&&temp->right==NULL) return count;
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
                n--;
            }
            count++;
        }
        return count; 
        
    }
};