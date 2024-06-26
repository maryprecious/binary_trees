#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserting the child right
 * @parent: parent node
 * @value: to put in the node
 * Return: return the newnode or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = newnode;
	}
	else
	{
		parent->right->parent = newnode;
		newnode->right = parent->right;
		parent->right = newnode;
	}

	return (newnode);
}
