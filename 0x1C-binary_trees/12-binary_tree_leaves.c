#include "binary_trees.h"
/**
 * rec_leaves - recursively counts binary tree leaves
 * @tree: tree to count leaves of
 * Return: how many leaves are in tree
 */
size_t rec_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree->left)
		left = rec_leaves(tree->left);
	if (tree->right)
		right = rec_leaves(tree->right);
	if (!tree->left && !tree->right)
		return (1);
	return (left + right);
}
/**
 * binary_tree_leaves - count the leaves of a binary tree
 * checks for null then hands off to helper function
 * @tree: tree to check for leaves
 * Return: number of leaves or 0 on failure
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (rec_leaves(tree));
}
