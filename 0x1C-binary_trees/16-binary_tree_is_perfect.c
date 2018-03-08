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
 * rec_full_height - check that all nodes children have equal height
 * @node: node to check if equal
 * Return: 1 if all equal otherwise 0
 */
int rec_full_height(const binary_tree_t *node)
{
	int left = 0, right = 0, lt = 1, rt = 1;

	if (node->left)
	{
		left = rec_height(node->left);
		lt = rec_full_height(node->left);
	}
	if (node->right)
	{
		right = rec_height(node->right);
		rt = rec_full_height(node->right);
	}
	return (((right == left) ? 1 : 0) & rt & lt);
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
	return (rec_full_height(tree));

}
