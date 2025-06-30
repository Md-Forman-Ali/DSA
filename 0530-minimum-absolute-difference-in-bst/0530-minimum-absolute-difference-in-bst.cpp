
class Solution {
public:
    int Mid = INT_MAX;
    TreeNode *prev = NULL;
    void inorder(TreeNode*root)
    {
        if( root == NULL)
            return ;
        inorder(root->left);
        if( prev!= NULL)
        {
            Mid = min( Mid , root->val - prev->val);
        }
        prev = root;
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return Mid;
        
    }
};