#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts leaves of a binary tree
 * @tree:  The pointer to node to count leaves
 * Description: 12. Leaves
 * Return: see below
 * 1. upon success, return number of leaves
 * 2. upon fail, return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* declare and initialize variable for leaves */
	size_t leaves = 0;

	/* base case */
	if (tree == NULL)
	{
		return (0);
	}

