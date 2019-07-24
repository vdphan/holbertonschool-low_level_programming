#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *tmp2 = NULL;

	if (!tree || !tree->right)
		return (NULL);
	tmp = tree;
	tree = tree->right;
	tmp->parent = tree;
	tmp2 = tree->left;
	tree->parent = NULL;
	tree->left = tmp;
	tmp->right = tmp2;
	return (tree);
}
