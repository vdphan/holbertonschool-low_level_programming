#include "binary_trees.h"
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
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: the height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (height(tree));
}
