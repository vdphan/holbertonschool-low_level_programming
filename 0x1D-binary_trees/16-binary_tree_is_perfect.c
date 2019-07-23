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
 * max - find max of 2 number
 * @a: first number
 * @b: second number
 * Return: the bigger number
 */
int max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
/**
 * height - helper function measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of tree
 */
size_t height(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);
	return (max(height(tree->left), height(tree->right)) + 1);
}
/**
 * binary_tree_balance_alt - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor
 */
int binary_tree_balance_alt(const binary_tree_t *tree)
{
	int balancefactor;

	if (!tree)
		return (0);
	balancefactor = height(tree->left) - height(tree->right);
	if (balancefactor == 0)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (full(tree) && binary_tree_balance_alt(tree));
}
