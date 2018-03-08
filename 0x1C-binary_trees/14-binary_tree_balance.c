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
 * binary_tree_balance - balance of a binary tree
 * @tree: tree to check balance of
 * Return: positive if left side is heavier negative otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;
	int balance = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = rec_height(tree->left) + 1;
	if (tree->right)
		right = rec_height(tree->right) + 1;
	balance = left - right;
	return (balance);
}
