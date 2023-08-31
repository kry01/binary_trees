#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - counts the nodes with at least one child in a BT.
 * @tree: Pointer to the node to count
 * Return: If tree is NULL, must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int lleft, lright;

	if (tree == NULL)
		return (0);
	if (tree->left == 0 && tree->right == 0)
		return (0);
	lleft = binary_tree_nodes(tree->left);
	lright = binary_tree_nodes(tree->right);
	return (lleft + lright + 1);
}
