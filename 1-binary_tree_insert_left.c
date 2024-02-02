#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *another node in a binary tree.
 * @parent: A pointer to the inserted node to the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an errorr occurs - NULL.
 *Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new_node;

        if (parent == NULL)
                return (NULL);

        new_node = binary_tree_node(parent, value);
        if (new_node == NULL)
                return (NULL);

        if (parent->left != NULL)
        {
                new_node->left = parent->left;
                parent->left->parent = new_node;
        }
        parent->left = new_node;

        return (new_node);
}