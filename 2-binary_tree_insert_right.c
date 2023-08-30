#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of another nod
 *
 * @parent: pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 * Return: 0 or created node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	
	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
