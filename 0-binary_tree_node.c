#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: return a pointer to the new node, 
 * 		   or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (NULL == tmp)
		return (NULL);

	
	tmp->parent = parent;
	tmp->right = NULL;
	tmp->left = NULL;
	tmp->n = value;

	return (tmp);
}
