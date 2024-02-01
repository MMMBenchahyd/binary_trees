#include "binary_trees.h"

/**
 * binary_tree_insert_left - is a function that inserts a node as 
 * 							the left-child of another node
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the tmp node.
 *
 * Return: return a pointer to the created node
 * 		  or NULL on failure or if parent is NULL
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (NULL == parent)
		return (NULL);

	tmp = binary_tree_node(parent, value);
	if (NULL == tmp)
		return (NULL);

	if (NULL != parent->left)
	{
		tmp->left = parent->left;
		parent->left->parent = tmp;
	}
	parent->left = tmp;

	return (tmp);
}
