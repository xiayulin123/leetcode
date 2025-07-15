/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int left_h = 0;
    int right_h = 0;
    struct TreeNode* node = root;
    while(node->left){
        left_h++;
        node = node->left;
    }
    node = root;
    while(node->right){
        right_h++;
        node = node->right;
    }
    if(left_h == right_h){
        return pow(2, left_h + 1) - 1;
    } else {
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
}
