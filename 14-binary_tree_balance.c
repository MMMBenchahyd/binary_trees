#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b;

	if (tree)
	{
		b = bt_height(tree->left) - bt_height(tree->right);
		return (b);
	}
	return (0);
}

/**
 * bt_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t bt_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lft = 0, rit = 0;

		rit = tree->right ? 1 + bt_height(tree->right) : 1;
		lft = tree->left ? 1 + bt_height(tree->left) : 1;
		if (lft > rit)
			return (lft);
		else
			return (rit);
	}
	return (0);
}
