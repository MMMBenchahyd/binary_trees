#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: The node in the binary tree.
 *
 * Return: NULL If node is NULL or the parent is NULL.
 *If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *lfft = NULL;
	binary_tree_t *rit = NULL;

	if (node && node->parent)
	{
		lfft = node->parent->left;
		rit = node->parent->right;
	}
	if (lfft == node)
		return (rit);
	else
		return (lfft);
}
