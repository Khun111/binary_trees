#include "binary_trees.h"
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(temp));
	if (!temp)
		return (NULL);
	else
	{
		temp->n = value;
		temp->parent = parent;
		temp->left = NULL;
		temp->right = NULL;
	}
	return (temp);
}
