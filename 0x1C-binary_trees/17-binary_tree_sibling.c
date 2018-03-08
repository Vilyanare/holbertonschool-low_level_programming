#include "binary_trees.h"
/**
 * binary_tree_sibling - finds simbling of currenty node
 * @node: node to find sibling of
 * Return: address of sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->right == node)
			return (node->parent->left);
		if (node->parent->left == node)
			return (node->parent->right);
	}
	return (NULL);
}
