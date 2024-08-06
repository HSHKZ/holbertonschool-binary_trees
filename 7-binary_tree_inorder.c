#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * If tree or func is NULL, do nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_l = binary_tree_height(tree->left);
	count_r = binary_tree_height(tree->right);

	if (count_l >= count_r)
		return (count_l + 1);
	else
		return (count_r + 1);
}
