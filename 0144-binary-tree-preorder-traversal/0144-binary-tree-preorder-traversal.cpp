class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }

    void preorder(TreeNode* root, vector<int> &result) {
        if (root == nullptr) return;

        result.push_back(root->val);      // 1. Visit root
        preorder(root->left, result);     // 2. Visit left
        preorder(root->right, result);    // 3. Visit right
    }
};
