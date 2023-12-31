#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree.
 *@tree: A pointer to the root node of the tree to measure the size.
 * Return: if tree is NULL, must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t left_n, right_n;

		left_n = binary_tree_size(tree->left);
		right_n = binary_tree_size(tree->right);
		return (1 + left_n + right_n);
	}
}
