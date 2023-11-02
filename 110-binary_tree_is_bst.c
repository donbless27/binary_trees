#include "binary_trees.h"
/**
 * find_node - a function that find node in a tree
 * @root: the root of the tree to evaluate
 * @node: the node to find
 * Return: 1 if exits 0 if not
 */
int find_node(binary_tree_t *root, binary_tree_t *node)
{

	if (root == NULL)
		return (0);
	if (node == root)
		return (1);
	if (node->n < root->n)
		return (find_node(root->left, node));
	if (node->n > root->n)
		return (find_node(root->right, node));
	return (0);
}
/**
 * croos_tree - cross the tree checking if each node exist correctly
 * @root: the root node of the tree
 * @node: the current node to evaluate
 * Return: 1 if is BST. 0 if otherwise
 */
int croos_tree(binary_tree_t *root, binary_tree_t *node)
{
	if (root && node)
	{
		int res = 0;

		res = find_node(root, node);
		if (node->left)
			res &= croos_tree(root, node->left);
		if (node->right)
			res &= croos_tree(root, node->right);
		return (res);
	}
	return (0);
}
/**
 * binary_tree_is_bst - function that checks if a binary tree
 *            is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if is bst 0 if otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (croos_tree((binary_tree_t *)tree, (binary_tree_t *)tree));
}
