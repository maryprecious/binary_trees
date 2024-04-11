#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - get height node
 * @tree: pointer to the root node to traverse
 * Return: return the newnode or NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

