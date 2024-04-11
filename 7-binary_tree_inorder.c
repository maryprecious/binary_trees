#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse in order
 * @tree: pointer to the root node to traverse
 * @func: is a function to call for each node
 * Return: return the newnode or NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
