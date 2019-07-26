#include "binary_trees.h"

/**
 * new - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *new(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	return (new_node);
}
/**
 *bst_loop - loop function for insert
 *@current:pointer to current node
 *@value: value want to be inserted
 *Return: the pointer to a node
 */
bst_t *bst_loop(bst_t *current, int value)
{
	bst_t *new_node = NULL;

	while (current)
	{
		if (current->n == value)
			return (NULL);
		if (current->n > value)
		{
			if (current->left)
				current = current->left;
			else
			{
				new_node = new(current, value);
				if (!new_node)
					return (NULL);
				current->left = new_node;
				return (current->left);
			}
		}
		else
		{
			if (current->right)
				current = current->right;
			else
			{
				new_node = new(current, value);
				if (!new_node)
					return (NULL);
				current->right = new_node;
				return (current->right);
			}
		}
	}
	return (current);
}
/**
 * bst_insert -  inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: a pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current =  NULL;
	bst_t *tmp = NULL;

	if (!tree)
		return (NULL);
	if (!(*tree))
	{
		tmp = new(*tree, value);
		if (!tmp)
			return (NULL);
		*tree = tmp;
		return (*tree);
	}
	current = *tree;
	return (bst_loop(current, value));
}
