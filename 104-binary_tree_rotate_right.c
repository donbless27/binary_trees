#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that performs a rigth-rotation
 *        on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a  pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *reserve, *temp;

	if (tree == NULL)
		return (NULL);
	if (tree->left)
	{
		temp = tree->left->right;
		reserve = tree->left;
		reserve->parent = tree->parent;
		reserve->right = tree;
		tree->parent = reserve;
		tree->left = temp;
		if (temp)
			temp->parent = tree;
		return (reserve);
	}
	return (NULL);
}
