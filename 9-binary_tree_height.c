#include "binary_trees.h"

/**
 * binary_tree_height - the function that mesures the height of a binary tree.
 * @tree: the pointer to the root node of the tree to mesures the height.
 * return: 0 if the tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_1 = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_1 = binary_tree_height(tree->left);
	count_r = binary_tree_height(tree->right);

	if (count_1 >= count_r)
		return (count_1 +1);
	else
		return (count_r +1);
}
