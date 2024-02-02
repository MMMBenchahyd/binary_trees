#include "binary_trees.h"

/**
 * is_full_recursive - Check if a binary treee is full recursively.
 * @tree: A pointer to the root node of the checked tree.
 *
 * Return: If tree is not full 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (((tree->left) && !(tree->right)) ||
		    (!(tree->left) && (tree->right)) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Examine if a binary tree is full.
 * @tree: A pointr to the root node of the tree to check.
 *
 * Return: If tree is not full or NULL - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
