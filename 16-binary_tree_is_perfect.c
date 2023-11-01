#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: pointer to the tree to measure the height of
 * Return: height of the tree. 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (!tree)
		return (0);

	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_size - Function that measures the size of a binary tree
 * @tree: pointer to the tree to measure the size of
 * Return: size of the tree. 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 *_pow_recursion - returns the value of a raised to the power of b
 *@a: the value to exponentiate
 *@b: the power to raise a to
 *Return: a to the power of b, or -1 if b is negative
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	else
		return (a * _pow_recursion(a, b - 1));
}

/**
 * binary_tree_is_perfect - A functionchecks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect. If tree is NULL, function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t total = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	l = binary_tree_height(tree);
	r = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, l + 1);
	return (total - 1 == r);
}
