#include "binary_trees.h"
/**
 * rec_height - recursively finds the height of a binary tree
 * @tree: binary tree to find height of
 * Return: height of the tree
 */
size_t rec_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree->left)
		left = rec_height(tree->left) + 1;
	if (tree->right)
		right = rec_height(tree->right) + 1;
	return ((left > right) ? left : right);
}
/**
 * binary_tree_height - Finds height of a binary tree
 * checks values for null then passes to helper func
 * @tree: binary tree to find height off
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (rec_height(tree));
}
