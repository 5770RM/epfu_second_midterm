//
// Created by timur on 1/17/22.
//
struct tree_el {
    int val;
    struct tree_el * right , * left;
};typedef struct tree_el node;

int num_of_el(node *root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + num_of_el(root->right) + num_of_el(root->left);

}