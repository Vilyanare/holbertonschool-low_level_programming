#include "binary_trees.h"
/**
 * recursive_tree_preorder - recursively traverses a binary tree using
 * pre_order traversal method then calls func on each node
 * @tree: root of the tree
 * @func: function to use on each node of the tree
 */
void recursive_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	func(tree->n);
	if (tree->left)
		recursive_tree_preorder(tree->left, func);
	if (tree->right)
		recursive_tree_preorder(tree->right, func);
}
/**
 * binary_tree_preorder - traverses a binary tree using
 * pre-order traversal method then calls func on each node of tree
 * checks for null then hands to recursive function
 * @tree: root of tree to check
 * @func: function to use on each node of the tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	recursive_tree_preorder(tree, func);
}
