#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: Pointer to the node to count
 *
 * Return: If tree is NULL, must return 0
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleft, lright;

	if (tree == NULL)
		return (0);
	if (tree->left == 0 && tree->right == 0)
		return (1);

	lleft = binary_tree_leaves(tree->left);
	lright = binary_tree_leaves(tree->right);

	return (lleft + lright);
}
