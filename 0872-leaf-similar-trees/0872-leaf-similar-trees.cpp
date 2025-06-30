
class Solution {
public:
    void inorder(TreeNode*root, vector<int>&v)
    {
        if( root == NULL)
            return;
        if(root->left== NULL && root->right== NULL)
            v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        inorder(root1,v1);
        inorder(root2,v2);
        if(v1==v2)
            return true;
        else
            return false;
        
    }
};