#include "binary_trees.h"

/**
 * tree_heihgt - calculates the heihgt of a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: the height of the tree.
 */

size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = tree_height(tree->left);
	size_t right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
/**
 * count_nodes - counts the number of nodes in a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: the number oh nodes in the tree.
 */
size_t count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (count_nodes(tree->left) + count_nodes(tree->right) + 1);
}
/**
 * is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree.
 * @d: the depth of the tree.
 * @level: the level of the current node.
 *
 * Return: 1 is the tree is  perfect, 0 otherwise.
 */
int is_perfect(const binary_tree_t *tree, size_t d, size_t level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d = tree_height(tree);
	size_t node_count = count_nodes(tree);

	return ((node_count == (size_t)((1 << d) - 1)) && is_perfect(tree, d, 0));
}
