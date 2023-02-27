#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = binary_tree_node(parent, value);
	if (!temp || !parent)
		return (NULL);
	if (parent->left)
	{
		temp->left = parent->left;
		parent->left->parent = temp;
	}
	parent->left = temp;
	return (temp);
}
