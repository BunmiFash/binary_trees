#include "binary_trees.h"
/**
* binary_tree_depth  - A function that measures the depth
* of a tree.
* @tree: Pointer to the root node of the tree
* Return: Height of tree or 0 if tree is NULL
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent != NULL)
	{
		depth  = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
