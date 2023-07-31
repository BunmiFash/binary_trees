#include "binary_trees.h"

/**
* binary_tree_delete - A function that deletes an entire binary tree
* @tree: Pointer to the root node of the tree to delete
* if tree is NULL, do nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}
