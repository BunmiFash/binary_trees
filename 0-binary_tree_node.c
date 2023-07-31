#include "binary_trees.h"
#include <stdlib.h>
/**
* binary_tree_node - A function that creates a binary tree node
* @parent: Pointer to the parent node
* @ value: Value of the new node
* Return: Pointer to the new node or NULL otherwise
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL)
    {
        return (NULL);
    }
    newNode->n = value;
    newNode->left = NULL;
    newNode->right = NULL;
    
    return (newNode);
}
