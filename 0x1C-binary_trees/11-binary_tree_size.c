#include "binary_trees.h"
/**
 * rec_size - recursively finds the size of a binary tree
 * @tree: binary tree to find size of
 * Return: size of the tree
 */
size_t rec_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree->left)
		left = rec_size(tree->left) + 1;
	if (tree->right)
		right = rec_size(tree->right) + 1;
	return (left + right);
}
/**
 * binary_tree_size - measures size of a binary tree
 * checks for null then hands off to helper func
 * @tree: tree to find size of
 * Return: size of the tree or 0 if failed
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (rec_size(tree) + 1);
}
