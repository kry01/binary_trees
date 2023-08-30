#include "binary_trees.h"
#include <stdlib.h>

/**
* binary_tree_delete - delete a tree
* @tree: tree to be deleted
*
* Return: nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
