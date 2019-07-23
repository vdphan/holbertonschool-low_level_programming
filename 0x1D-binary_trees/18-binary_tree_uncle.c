#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node:  a pointer to the node to find the uncle
 * Return: return a pointer to the uncle node else return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right)
			return (node->parent->parent->right);
		else
			return (NULL);
	}
	if (node->parent->parent->left)
		return (node->parent->parent->left);
	else
		return (NULL);
	return (NULL);
}
