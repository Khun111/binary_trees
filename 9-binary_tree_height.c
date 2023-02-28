#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		j = 1 + binary_tree_height(tree->left);
	}
	else if (tree->right)
	{
		j = 1 + binary_tree_height(tree->right);
	}
	return (i > j ? i : j);
}
