#include "binary_trees.h"

/* Counts nodes */
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to count the nodes from
 *
 * Return: number of nodes counted
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/* Measure size of binary tree */
/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: A pointer to the tree to measure the size of
 * Return: size of the tree. 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/* Count the leaves in a binary tree */
/**
 * binary_tree_leaves - A function to counts the leaves in a binary tree
 * @tree: a pointer to the tree to count the leaves from
 * Return: number of leaves. 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
