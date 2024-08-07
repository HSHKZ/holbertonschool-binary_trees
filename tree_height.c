#include "binary_trees.h"

/**
 * tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The height of the tree.
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = tree_height(tree->left);
	size_t right_height = tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}
