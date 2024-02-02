#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a binary tree's node.
 * @node: The node in the binary tree.
 *
 * Return: The uncle of the given node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *lfft = NULL;
	binary_tree_t *rit = NULL;
	binary_tree_t *father = (node != NULL ? node->parent : NULL);

	if ((father != NULL) && (father->parent != NULL))
	{
		lfft = father->parent->left;
		rit = father->parent->right;
	}
	return (lfft == father ? rit : lfft);
}
