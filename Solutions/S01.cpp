TreeNode* invertTree(TreeNode* root) {
    if(!root) return NULL;
    TreeNode* node = new TreeNode(root->val);
    node->left = invertTree(root->right);
    node->right = invertTree(root->left);
    return node;
}