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
	bst_t *cur = NULL;

	while (current->left || current->right)
	{
		if (current->n == value)
			return (NULL);
		if (current->left && current->right)
		{
			if (current->n < value)
				current = current->right;
			else if (current->n > value)
				current = current->left;
		}
		else if (current->left && !current->right)
		{
			if (current->n > value)
				current = current->left;
			else
			{
				cur = new(current, value);
				if (!cur)
					return (NULL);
				current->right = cur;
				return (current->right);
			}
		}
		else if (!current->left && current->right)
		{
			if (current->n < value)
				current = current->right;
			else
			{
				cur = new(current, value);
				if (!cur)
					return (NULL);
				current->left = cur;
				return (current->left);
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
	bst_t *current = *tree;
	bst_t *tmp = NULL, *loop = NULL;

	if (!tree)
		return (NULL);
	if (!(*tree))
	{
		tmp = new(current, value);
		if (!tmp)
			return (NULL);
		*tree = tmp;
		return (*tree);
	}
	loop = bst_loop(current, value);
	if  (!loop)
		return (NULL);
	if (loop->n == value)
		return (loop);
	tmp = new(loop, value);
	if (!tmp)
		return (NULL);
	if (loop->n < value)
		loop->right = tmp;
	else
		loop->left = tmp;
	return (tmp);
}
