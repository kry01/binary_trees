#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value:  the value to store in the new node.
 * Return: 0 or the created node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL || parent == NULL)
		return NULL;

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		node->n = parent->left->n;
		parent->left->n = value;
		parent->left->left = node;
	}
	return parent->left;
}
