#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_tree_size - tree size
 * @tree: a pointer to root node
 *
 * Return: the size of tree or if tree empty NULL
 */
size_t _binary_tree_size(const binary_tree_t *tree)
{

	size_t l_size = 0, r_size = 0;

	if (!tree)
		return (0);

	l_size = tree->left ? _binary_tree_size(tree->left) : 0;
	r_size = tree->right ? _binary_tree_size(tree->right) : 0;
	return (l_size + r_size + 1);
}

/**
 * _binary_tree_height - tree height 
 * @tree: a pointer to root node
 *
 * Return: height of tree or if tree empty NULL
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l_Height = 0, r_Height = 0;

	if (!tree)
		return (0);

	l_Height = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	r_Height = tree->right ? 1 + _binary_tree_height(tree->right) : 0;

	if (l_Height >= r_Height)
		return (l_Height);
	else
		return (r_Height);
}

/**
 * power - index of a num
 * @base: base of num
 * @exp: exp of num
 *
 * Return: size of tree or if tree empty NULL
 */
int power(int base, int exp)
{
	int power = 1, i = 1;

	for (i = 1; i <= exp; i++)
	{
		power *= base;
	}
	return (power);
}

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: a pointer to root node of tree
 *
 * Return: 0 if tree is imperfect or NULL & if perfect 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size = 0, height = 0, nodes = 0;

	if (tree)
	{
		height = _binary_tree_height(tree) + 1;
		size = _binary_tree_size(tree);
		nodes = power(2, height);

		if (size == (nodes - 1))
			return (1);
		else
			return (0);
	}
	return (0);
}
