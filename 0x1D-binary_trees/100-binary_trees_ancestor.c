#include "binary_trees.h"

/**
 * depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: the depth of the node
 */
size_t depth(const binary_tree_t *tree)
{
	int count = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		count++;
	}
	return (count);
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first:  a pointer to the first node
 * @second:  a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *first_1 = (binary_tree_t *)first;
	binary_tree_t *second_2 = (binary_tree_t *)second;
	binary_tree_t *tmp;

	if (!first || !second)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	if (depth(first) <= depth(second))
	{
		tmp = second_2;
		while (first_1)
		{
			while (second_2)
			{
				if (first_1 == second_2)
					return (first_1);
				second_2 = second_2->parent;
			}
			second_2 = tmp->parent;
			first_1 = first_1->parent;
		}
	}
	else
	{
		tmp = first_1;
		while (second_2)
		{
			while (first_1)
			{
				if (second_2 == first_1)
					return (second_2);
				first_1 = first_1->parent;
			}
			first_1 = tmp->parent;
			second_2 = second_2->parent;
		}
	}
	return (NULL);
}
