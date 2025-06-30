
class Solution {
public:
    int mx;
    int max_height(TreeNode* root) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return 1;
        int l = max_height(root->left);
        int r = max_height(root->right);
        int d = l+r;
        mx = max(mx,d);
        return max(l,r)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        mx=0;
        int h = max_height(root);
        return mx;
    }
};