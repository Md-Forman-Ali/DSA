
class Solution {
public:
    bool isUnival(TreeNode*root,int val)    
    {
        if( root==  NULL)
            return true;
        if(root->val!=val)
            return false;
        bool leftval = isUnival(root->left,val);
        bool rightval = isUnival(root->right,val);
        return leftval && rightval;
    

    }
    bool isUnivalTree(TreeNode* root) {
        if(root== NULL)
            return true;
        return isUnival(root,root->val);

        
    }
};