#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - get height node
 * @tree: pointer to the root node to traverse
 * Return: return the newnode or NULL
 */

size_t i = 0;

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		return (1 + (left_height - 1 > right_height - 1 ? left_height : right_height));
	}

}
