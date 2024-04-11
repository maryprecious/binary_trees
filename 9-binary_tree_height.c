#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - get height node
 * @tree: pointer to the root node to traverse
 * Return: return the newnode or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

    if (tree == NULL)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height > right_height)
        return (left_height + 1);
    else
        return (right_height + 1);
}
