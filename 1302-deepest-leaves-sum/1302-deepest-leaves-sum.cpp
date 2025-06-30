
class Solution {
public:
    int max_height(TreeNode*root)
    {
        if( root == NULL)
            return 0;
        if(root->left == NULL && root->right == NULL)
            return 1;
        int left = max_height(root->left);
        int right = max_height(root->right);
        return max(left,right)+1;
    }
    int deepestLeavesSum(TreeNode* root) {
        int mx = max_height(root);
        int sum = 0;
        queue <pair<TreeNode*,int>> q;
        q.push({root,1});
        while(!q.empty())
        {
            pair<TreeNode*,int> parent = q.front();
            q.pop();
            TreeNode* node = parent.first;
            int level = parent.second;

            if(level == mx)
            {
                sum+= node->val;
            }
            if(node->left)
                q.push({node->left,level+1});
            if(node->right)
                q.push({node->right,level+1});
        }
        return sum;
    }
};