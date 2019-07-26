#include "binary_trees.h"
#include <limits.h>
/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: a pointer to the root node of the BST to search
 * @value: the value to search in the tree
 *
 * Return: nothing
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tree_t = (bst_t *)tree;

	if (!tree_t)
		return (NULL);
	if (tree_t->n == value)
		return (tree_t);
	if (tree_t->n < value)
		return (bst_search(tree_t->right, value));
	else
		return (bst_search(tree_t->left, value));
}
