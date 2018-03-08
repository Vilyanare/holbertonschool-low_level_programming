#include "binary_trees.h"
/**
 * binary_tree_uncle - finds uncle of a node of a binary tree
 * @node: node to find uncle of
 * Return: uncle of node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
