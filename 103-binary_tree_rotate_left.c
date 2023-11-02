#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  Function that performs a left-rotation
 *         on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *reserve, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->right)
	{
		temp = tree->right->left;
		reserve = tree->right;
		reserve->parent = tree->parent;
		reserve->left = tree;
		tree->parent = reserve;
		tree->right = temp;
		if (temp)
			temp->parent = tree;
		return (reserve);
	}
	return (NULL);
}
