#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf
 * @node: node to be ckecked
 *
 * Return: 0 if leaf, 1 if not leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);

}
