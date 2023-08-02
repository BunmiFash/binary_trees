#include "binary_trees.h"
/**
* binary_tree_insert_left - Function to insert a node
* as the left-child of another node
* @parent: pointer to the node to insert the
* lest child in.
* @value: value to store in the new node
* Return: pointer to the created node
* or NULL on failure or if parent is NULL
* If parent already has a left-child, the new node must take its place
* and the old left-child must be set as the left-child of the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *node;
	binary_tree_t *tmp;

	binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else if (parent->left != NULL)
	{
		tmp = parent->left;
		parent->left = node;
		tmp->parent = node;
		node->left = tmp;
	}
	return (node);
}
