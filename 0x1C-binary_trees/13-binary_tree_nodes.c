#include "binary_trees.h"
/**
 * rec_nodes - recursively counts binary tree nodes with children
 * @tree: tree to count nodes with children
 * Return: nubmer of nodes with children
 */
size_t rec_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree->left)
		left = rec_nodes(tree->left);
	if (tree->right)
		right = rec_nodes(tree->right);
	if (tree->left || tree->right)
		return (right + left + 1);
	return (0);
}
/**
 * binary_tree_nodes - count the nodes with children of a binary tree
 * checks for null then hands off to helper function
 * @tree: tree to check for nodes with children
 * Return: number of nodes or 0 on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (rec_nodes(tree));
}
