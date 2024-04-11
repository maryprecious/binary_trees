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
	if (tree == NULL || (tree->parent == NULL))
		return (0);
	size_t left_depth = binary_tree_depth(tree->left);
	size_t right_depth = binary_tree_depth(tree->right);
	printf("%ld the left node\n", left_depth);
	printf("%ld the right node\n", right_depth);

	return (1 + (left_depth > right_depth ? left_depth : right_depth));
}
