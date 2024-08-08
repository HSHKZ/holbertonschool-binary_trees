#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @avalue: value to store in the new node
 *
 * Return: pointer to the created tnod, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);
	newn = binary_tree_node(NULL, value);
	if (newn == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = newn;
		newn->right = parent->right;
	}
	parent->right = newn;
	newn->parent = parent;
	return (newn);
}
