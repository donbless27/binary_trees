#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node as the
 *        right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value:The value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or
 *        if parent is NULL
 * Description: If parent already has a right-child, the new node
 *        must take its place, and the old right-child must be set
 *        as the right-child of the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_r;

	if (!parent)
		return (NULL);

	node_r = malloc(sizeof(binary_tree_t));
	if (!node_r)
		return (NULL);

	node_r->n = value;
	node_r->parent = parent;
	node_r->left = NULL;
	node_r->right = parent->right;
	parent->right = node_r;
	if (node_r->right)
		node_r->right->parent = node_r;
	return (node_r);
}
