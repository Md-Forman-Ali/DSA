
class Solution {
public:
    vector<int> v;
    vector<int> postorderTraversal(TreeNode* root) {
        if (root != NULL) {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            v.push_back(root->val);
        }

        return v;
    }
};