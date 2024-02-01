#include "binary_trees.h"

/**
 * h_of_node - Computes the height of a binary tree.
 * @node: Pointer to a binary tree.
 * @i: The height.
 * @h: A pointer to a variable to store value.
 */
void h_of_node(const binary_tree_t *node, size_t i, size_t *h)
{
	if (!node)
	{
		if ((node->left == NULL) && (node->right == NULL))
		{
			if (i > *h)
				*h = i;
		}
		else
		{
			h_of_node(node->left, i + 1, h);
			h_of_node(node->right, i + 1, h);
		}
	}
}

/**
 * binary_tree_height - function that measures the
 * height of a binary tree.
 * @tree: Pionter to the binary tree.
 *
 * Return: The height of the given binary tree.
 * f tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0;

	h_of_node(tree, 0, &h);
	return (h);
}

