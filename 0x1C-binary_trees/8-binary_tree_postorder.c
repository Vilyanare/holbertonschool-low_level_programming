#include "binary_trees.h"
/**
 * recursive_tree_postorder - recursively traverses a binary tree using
 * post-order traversal method then calls func on each node
 * @tree: root of the tree
 * @func: function to use on each node of the tree
 */
void recursive_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		recursive_tree_postorder(tree->left, func);
	if (tree->right)
		recursive_tree_postorder(tree->right, func);
	func(tree->n);
}
/**
 * binary_tree_postorder - traverses a binary tree using
 * post-order traversal method then calls func on each node of tree
 * checks for null then hands to recursive function
 * @tree: root of tree to check
 * @func: function to use on each node of the tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	recursive_tree_postorder(tree, func);
}
