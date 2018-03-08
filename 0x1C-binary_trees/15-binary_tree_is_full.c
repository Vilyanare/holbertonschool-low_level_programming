#include "binary_trees.h"
/**
 * rec_full - check to see if a binary tree is full
 * @tree: tree to check if full
 * Return: 1 if full 0 otherwise
 */
int rec_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left)
		left = rec_full(tree->left);
	if (tree->right)
		right = rec_full(tree->right);
	return ((left == right) ? 1 : 0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * checks for null then hands off to helper function
 * @tree: tree to check if full
 * Return: 1 if full 0 if not or error
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (rec_full(tree));
}
