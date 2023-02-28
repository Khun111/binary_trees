#include "binary_trees.h"
/**
 * binary_tree_delete - deletes binary tree
 * @tree: tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
