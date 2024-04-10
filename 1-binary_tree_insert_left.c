#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserting the child lef
 * @parent: parent node
 * @value: to put in the node
 * Return: return the newnode or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	newnode->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = newnode;
	}
	else
	{
		parent->left->parent = newnode;
		newnode->left = parent->left;
		parent->left = newnode;
	}

	return (newnode);
}
