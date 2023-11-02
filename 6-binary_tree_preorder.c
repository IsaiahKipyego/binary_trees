#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_preorder - goes thro
 * binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree
 *
 * @func: pointer to a function to call for each node.
 * The value in node that must be passed as a
 * parameter to this function
 *
 * Return: NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
