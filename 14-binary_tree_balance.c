#include "binary_trees.h"

/**
 * binary_tree_height_b - A function that Measures height of
 *       a binary tree for a bal tree
 * @tree: Pointer to the tree to go through
 * Return: Height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t h_l = 0;
	size_t h_r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			h_l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			h_r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((h_l > h_r) ? l : h_r);
	}
}

/**
 * binary_tree_balance - a function that Measures balance
 *         factor of a binary tree
 * @tree: pointer to the tree to go through
 * Return: balanced factor
 *    If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, sum = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		sum = left - right;
	}
	return (sum);
}
