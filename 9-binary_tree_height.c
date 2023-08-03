#include "binary_trees.h"
/**
* binary_tree_height - A function that measures the height
* of a tree.
* @tree: Pointer to the root node of the tree
* Return: Height of tree or 0 if tree is NULL
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	left = 0;
	right = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right = 1 + binary_tree_height(tree->right);
	}
	if (right > left)
	{
		return (right);
	}
	return (left);
}
