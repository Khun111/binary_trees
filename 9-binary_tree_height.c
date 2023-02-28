#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = -1;

	if (!tree)
		return (0);

	for (; (tree); i++)
	{
		tree = tree->right;
	}
	return (i);
}
