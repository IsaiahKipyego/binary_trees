#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - measures height of a binary tree
 * @tree: a pointer to root node of tree to measure
 * Return: height or if tree is empty NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree != NULL)
	{
		if (tree->left)
		{
			h_left = binary_tree_height(tree->left) + 1;
		}
		if (tree->right)
		{
			h_right = binary_tree_height(tree->right) + 1;
		}
		if (h_left >= h_right)
			return (h_left);
		else
			return (h_right);
	}
	return (0);
}
