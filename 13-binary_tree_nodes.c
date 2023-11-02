#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - counts nodes in a binary tree
 * with at least 1 child
 * @tree: a pointer to root node of tree to count
 * number of nodes
 *
 * Return: size or if tree is empty NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_node = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	no_node++;
	no_node += binary_tree_nodes(tree->left);
	no_node += binary_tree_nodes(tree->right);
	return (no_node);
}
