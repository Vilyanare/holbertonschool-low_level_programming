#include "binary_trees.h"
/**
 * binary_tree_depth - finds depth of a node in a binary tree
 * @node: node to find the depth of
 * Return: depth of node or 0 on fail
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node)
		for (; node->parent != NULL; depth++)
		{
			node = node->parent;
		}
	return (depth);
}
