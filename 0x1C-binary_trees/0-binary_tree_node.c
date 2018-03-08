#include "binary_trees.h"
/**
 * binary_tree_node - creates a node of a binary tree
 * @parent: parent node of node to create
 * @value: value to be assigned to n variable in node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
