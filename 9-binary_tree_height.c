#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - through a binary tree using pre-order traversal.
 * @tree: pointer to the root node of the tree to traverse.
 * Return: 0 or increment by 1.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}
