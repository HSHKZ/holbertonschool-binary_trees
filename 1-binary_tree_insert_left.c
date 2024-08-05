#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of a given node.
 * @value: The integer value to be stored in the new node.
 * @parent: The parent node.
 * return: The node created.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}

	parent->left = new_node;
	new_node->parent = parent;

	return (new_node);
}
