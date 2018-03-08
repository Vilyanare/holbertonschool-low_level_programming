#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts new node into tree as the right child
 * of another node. Pushes right child of parent to right child of new node
 * @parent: address of parent node
 * @value: value to set n of new node
 * Return: address to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->right = parent->right;
	if (new->right)
		new->right->parent = new;
	new->left = NULL;
	new->n = value;
	parent->right = new;
	return (new);
}
