#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *tmp2;

	if (!tree || !tree->left)
		return (NULL);
	tmp = tree;
	tree = tree->left;
	tmp2 = tree->right;
	tmp->parent = tree;
	tree->parent = NULL;
	tree->right = tmp;
	tmp->left = tmp2;
	return (tree);
}
