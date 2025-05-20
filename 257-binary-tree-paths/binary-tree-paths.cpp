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
    void treePath(TreeNode* root, vector<string>& ans, string temp) {
        if (!root)
            return;

        if (!root->left && !root->right) {
            temp += to_string(root->val);
            ans.push_back(temp);
            return;
        }

        temp += to_string(root->val) + "->";
        treePath(root->left, ans, temp);
        treePath(root->right, ans, temp);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        treePath(root, ans, "");
        return ans;
    }
};