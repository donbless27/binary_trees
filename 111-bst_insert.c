#include "binary_trees.h"
/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: Always 0 (Success)
 *
 * Description: If the address stored in tree is NULL, the created
 *            node must become the root node. If the value is already
 *            present in the tree, it must be ignored
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *res = NULL;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	res = *tree;
	if (value < res->n)
	{
		if (res->left == NULL)
		{
			res->left = binary_tree_node(res, value);
			return (res->left);
		}
		return (bst_insert(&(res->left), value));
	}
	if (value > res->n)
	{
		if (res->right == NULL)
		{
			res->right = binary_tree_node(res, value);
			return (res->right);
		}
		return (bst_insert(&(res->right), value));
	}
	return (NULL);
}
