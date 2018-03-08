#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check to see if node is a leaf of a binary tree
 * @node: node to check
 * Return: 1 if yes 0 if no
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
