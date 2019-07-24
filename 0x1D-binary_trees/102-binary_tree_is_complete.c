#include "binary_trees.h"
/**
 * size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size of the binary tree
 */
size_t size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (size(tree->left) + size(tree->right) + 1);
}
/**
 *complete - checks if a binary tree is complete
 *@tree: pointer to the root node of the tree to check
 *@idx: index of a given nodes
 *@n_nodes: the size of tree.
 *Return: 1 if complete else 0
 */
int complete(const binary_tree_t *tree, int idx, int n_nodes)
{
	if (tree == NULL)
		return (1);
	if (idx >= n_nodes)
		return (0);
	return (complete(tree->left, 2 * idx + 1, n_nodes) &&
		complete(tree->right, 2 * idx + 2, n_nodes));
}
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * Return: if a binary is complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int idx = 0;
	int n_nodes = 0;

	n_nodes = size(tree);
	if (!tree)
		return (0);
	return (complete(tree, idx, n_nodes));
}
