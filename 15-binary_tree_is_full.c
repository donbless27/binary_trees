#include "binary_trees.h"

/**
 * binary_tree_is_full - A function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is full. If tree is NULL, function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
