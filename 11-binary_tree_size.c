#include "binary_trees.h"
/**
 * binary_tree_size -Will  measure the actual size of binary tree
 * @tree: The  tree to measure
 *
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	return (0);
}
