#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node.
 * @node: the node to know its sibling.
 * Return: the sibling or NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
