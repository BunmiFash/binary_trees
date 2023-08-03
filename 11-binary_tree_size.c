#include "binary_trees.h"
/**
 * binary_tree_size - A function that returns the size of
 * a node
 * @tree: Pointer to the node
 * Return: Size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left, right;

	left = 0;
	right = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	left += binary_tree_size(tree->left);
	right += binary_tree_size(tree->right);

	size = 1 + (left + right);
	return (size);
}
