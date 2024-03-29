#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree.
 * @tree: is a pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	tmp = tree;
	if (tmp)
	{
		binary_tree_delete(tmp->right);
		binary_tree_delete(tmp->left);
		free(tmp);
	}
}
