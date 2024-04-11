#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - check is node is leaf
 * @node: node to check
 * Return: return the newnode or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
