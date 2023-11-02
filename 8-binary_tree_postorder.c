#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_postorder - goes thro a
 * binary tree by post-order traversal
 * @tree: pointer to the root node of the tree
 *
 * @func: pointer to a function to call for each node.
 * value in node must be passed as a
 * parameter to this function
 *
 * Return: NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
