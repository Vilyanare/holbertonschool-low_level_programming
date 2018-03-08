#include "binary_trees.h"
/**
 * binary_tree_delete - recursively frees memory of a binary tree
 * @tree: pointer to root of tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
			binary_tree_delete(tree->left);
		if (tree->right)
			binary_tree_delete(tree->right);
		free(tree);
	}
}
