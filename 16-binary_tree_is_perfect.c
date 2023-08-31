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
	lleft = binary_tree_nodes(tree->left);
	lright = binary_tree_nodes(tree->right);
	return (lleft + lright + 1);
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect.
 * @tree:  pointer to the root node of the tree to check.
 * Return: 0 or 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_nodes(tree) % 2 != 0)
		if (binary_tree_nodes(tree->left) == binary_tree_nodes(tree->right))
			return (1);
	return (0);
}
