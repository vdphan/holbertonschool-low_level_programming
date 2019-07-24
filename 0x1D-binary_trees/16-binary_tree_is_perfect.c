#include "binary_trees.h"
#include <math.h>
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
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int sizeoftree;

	if (!tree)
		return (0);
	sizeoftree = binary_tree_size(tree);
	return ((1 << (height(tree) + 1)) - 1 == sizeoftree);
}
