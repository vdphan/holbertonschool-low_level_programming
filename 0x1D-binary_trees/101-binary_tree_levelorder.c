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
/**
 * print_levelorder - prints a level of binary tree
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * @level: level of tree
 *
 * Return: nothing
 */
void print_levelorder(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (level == 1)
		func(tree->n);
	else
	{
		print_levelorder(tree->left, level - 1, func);
		print_levelorder(tree->right, level - 1, func);
	}
}
/**
 * binary_tree_levelorder - goes through a binary tree using level-order
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int heightoftree;
	int i;

	if (!tree || !func)
		return;
	heightoftree = binary_tree_height(tree) + 1;
	for (i = 1; i <= heightoftree; i++)
	{
		print_levelorder(tree, i, func);
	}
}
