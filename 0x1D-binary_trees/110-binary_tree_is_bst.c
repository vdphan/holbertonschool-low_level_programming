#include "binary_trees.h"
#include <limits.h>
/**
 *bst - recursive function to check for bst
 *@tree:  pointer to the root node of the tree to check
 *@min: minimun value
 *@max: maximum value
 *Return: return 1 if tree else 0
 */
int bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (bst(tree->left, min, tree->n - 1) &&
		bst(tree->right, tree->n + 1, max));
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: a pointer to the root node of the tree to check
 * Return:  return 1 if tree else 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	/*binary_tree_t *root = (binary_tree_t *)tree*/
	if (!tree)
		return (0);
	return (bst(tree, INT_MIN, INT_MAX));
}
