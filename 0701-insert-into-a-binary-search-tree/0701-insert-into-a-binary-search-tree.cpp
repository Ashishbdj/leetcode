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
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *temp=root;
        TreeNode *n= new TreeNode(val);
        if(root==nullptr)
        {
            root=n;
            return root;
        }
        while(temp!=nullptr)
        {
            if(val>temp->val)
            {
                if(temp->right==nullptr)
                {
                    temp->right=n;
                    break;
                }else
                {
                    temp=temp->right;
                }
            }else
            {
                 if(temp->left==nullptr)
                {
                    temp->left=n;
                    break;
                }else
                {
                    temp=temp->left;
                }
            }
        }
        return root;
    }
};