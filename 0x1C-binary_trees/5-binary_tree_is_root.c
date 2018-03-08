#include "binary_trees.h"
/**
 * binary_tree_is_root - check to see if node is the root of a binary tree
 * @node: node to check
 * Return: 1 for yes 0 for no
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
