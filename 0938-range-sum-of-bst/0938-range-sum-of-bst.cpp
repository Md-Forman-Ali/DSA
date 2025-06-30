class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high)
    {   
        if (root == NULL) 
            return 0;
        int sum = 0;        
        if (root->val > high) 
            sum += rangeSumBST(root->left, low, high);
        else if (root->val < low) 
            sum += rangeSumBST(root->right, low, high);
        else
        { 
            sum += root->val;
            sum += rangeSumBST(root->left, low, high);
            sum += rangeSumBST(root->right, low, high);
        }

        return sum;
    }
};
