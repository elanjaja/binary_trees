#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to a parent node of a node to created
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
