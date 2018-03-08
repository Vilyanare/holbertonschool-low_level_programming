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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check if perfect
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((rec_height(tree->left) == rec_height(tree->right)) & rec_full(tree));
}
