#include "binary_trees.h"
/**
 * power - raises n to the power of k
 * @num: number to me raised
 * @power: power to raise number to
 * Return: result of n to the power of k
 */
size_t power(size_t num, size_t power)
{
	size_t x = 0, raised = num;

	if (power == 0)
		return (1);
	for (x = 1; x < power; x++)
	{
		raised *= num;
	}
	return (raised);
}
/**
 * rec_size - recursively finds the size of a binary tree
 * @tree: binary tree to find size of
 * Return: size of the tree
 */
size_t rec_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = rec_size(tree->left) + 1;
	if (tree->right)
		right = rec_size(tree->right) + 1;
	return (left + right);
}
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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check if perfect
 * Return: 1 if perfect 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t x = 0, height = 0, perf_size = 0;

	if (!tree)
		return (0);
	height = rec_height(tree);
	while (x <= height)
	{
		perf_size += power(2, height - x);
		x++;
	}
	return (perf_size == rec_size(tree) + 1);
}
