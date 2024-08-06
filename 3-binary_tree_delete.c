#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree.
 * @tree: teh pointer to the node of the tree to delete.
 *
 * return: void.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
