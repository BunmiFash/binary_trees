#include "binary_trees.h"
/**
* binary_tree_insert_right - Function to insert a node
* as the right-child of another node
* @parent: pointer to the node to insert the
* right child in.
* @value: value to store in the new node
* Return: pointer to the created node
* or NULL on failure or if parent is NULL
* If parent already has a right-child, the new node must take its place
* and the old right-child must be set as the right-child of the new node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *tmp;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else if (parent->right != NULL)
	{
		tmp = parent->right;
		parent->right = node;
		tmp->parent = node;
		node->right = tmp;
	}
	return (node);
}
