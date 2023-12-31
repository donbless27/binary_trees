#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node
 *       as the left-child
 *@parent: This is a pointer to the node to insert the left-child in
 *@value: The value to store in the new node
 * Return: Return a pointer to created node, or NULL on failure
 *        or if parent is NULL
 * Description: If parent already has a left-child, the new node must
 *   take its place, and the old left-child must be setas the left-child
 *   of the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
