#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert a node as the child of a parent
 * pushes left child of parent to the left child of new node
 * @parent: address to parent node
 * @value: value to set n of current node
 * Return: address to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = parent->left;
	if (new->left)
		new->left->parent = new;
	new->right = NULL;
	new->n = value;
	parent->left = new;
	return (new);
}
