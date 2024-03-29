#include"binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf of binary tree
 * @node: pointer to the node to check
 * Return: 0 if not 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
