
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if (root == nullptr)
            return v;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int level_size = q.size();
            vector<int> level_nodes;

            for (int i = 0; i < level_size; ++i) {
                TreeNode* f = q.front();
                q.pop();
                level_nodes.push_back(f->val);

                if (f->left)
                    q.push(f->left);
                if (f->right)
                    q.push(f->right);
            }

            v.push_back(level_nodes);
        }

        return v;
    }
};
