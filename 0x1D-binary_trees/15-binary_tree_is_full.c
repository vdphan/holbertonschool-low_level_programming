#include "binary_trees.h"
/**
 * full - rescursively detects if tree is full
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 1 if full, 0 if not
 */
int full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	return (full(tree->left) && full(tree->right));
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (full(tree));
}
