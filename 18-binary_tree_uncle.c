#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_tree_sibling - gets sibling of a node
 * @node: a pointer to node whose sibling you are looking for
 * Return: a pointer to sibling or if not found NULL
 */
binary_tree_t *_binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent && node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - node is a pointer to
 * node to find the uncle
 * @node: a pointer to node to find uncle
 * Return: a pointer to the uncle node or
 * If node is NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (_binary_tree_sibling(node->parent))
		return (_binary_tree_sibling(node->parent));
	return (NULL);

}
