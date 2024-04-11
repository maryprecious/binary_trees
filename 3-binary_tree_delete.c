#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deleting all nodes
 * @tree: root node
 * Return: return the newnode or NULL
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	free(tree->left);
	free(tree->right);
	free(tree->left->right);
	free(tree->right->right);
	free(tree);
}
