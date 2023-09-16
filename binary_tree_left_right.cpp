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
    vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> tree;
        dig(root, tree);
        return tree;
    }
    void dig(TreeNode* head, vector<int> &arr){
        if(head == nullptr){
            return;
        }
        arr.push_back(head->val);
        dig(head->left, arr);
        dig(head->right, arr);

        
    }
    
};