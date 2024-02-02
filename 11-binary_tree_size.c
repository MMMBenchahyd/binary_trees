#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t bt_size = 0;

	if (tree)
	{
		bt_size = bt_size + 1;
		bt_size += binary_tree_size(tree->left);
		bt_size += binary_tree_size(tree->right);
	}
	return (bt_size);
}
