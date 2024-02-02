#include "binary_trees.h"

/**
 * stt_ov_tree - Computes some statistics.
 * @tree: The binary tree.
 * @n: The accumulated height of the current path.
 * @lvs: A pointer to the tree's leaf count value.
 * @hght: A pointer to the tree's maximum height value.
 */
void stt_ov_tree(const binary_tree_t *tree, size_t n,
	size_t *lvs, size_t *hght)
{
	if (tree)
	{
		if (!(tree->left) && !(tree->right))
		{
			if (lvs)
			{
				(*lvs)++;
			}
			if ((hght != NULL) && (n > *hght))
			{
				*hght = n;
			}
		}
		else
		{
			stt_ov_tree(tree->left, n + 1, lvs, hght);
			stt_ov_tree(tree->right, n + 1, lvs, hght);
		}
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: The binary tree.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lvs_cnt = 0;
	size_t tree_hght = 0;

	stt_ov_tree(tree, 0, &lvs_cnt, &tree_hght);
	return ((int)lvs_cnt == (1 << tree_hght) ? 1 : 0);
}
