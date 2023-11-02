#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_trees_ancestor - finds lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to lowest common ancestor node of two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *reload;

	if (!first && !second)
		return (NULL);

	while (first)
	{
		reload = (binary_tree_t *)second;
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			if (second->parent)
				second = second->parent;
			else
				break;
		}
		second = reload;
		if (first->parent)
			first = first->parent;
		else
			break;
	}
	return (NULL);
}
