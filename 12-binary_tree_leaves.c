#include "binary_trees.h"
/**
 * binary_tree_leaves - A function that counts the leaves in
 * a binary tree.
 * @tree: Pointer to the root node
 * Return: Size of tree or 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		leaves = 1;
		return (leaves);
	}
	if (tree->left == NULL)
	{
		left = 0;
	}
	else if (tree->left)
	{
		left = 1;
	}
	if (tree->right == NULL)
	{
		right = 0;
	}
	else if (tree->right)
	{
		right = 1;
	}
	leaves = left + right;
	return (leaves);
}
