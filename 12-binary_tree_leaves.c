#include "binary_trees.h"

/* Check if it is a leaf */
/**
 * binary_tree_is_leaf -  a function that checks if a node is a leaf.
 *@node: a pointer to the node to check.
 * Return: return 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}

/* Count the number of leaves */
/**
 * binary_tree_leaves - number of leaves
 *@tree: pointer to the root node of the tree to count the number of leaves.
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tree) +
			binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));

}
