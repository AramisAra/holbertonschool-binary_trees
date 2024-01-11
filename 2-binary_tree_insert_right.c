#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another binary tree
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_ *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}