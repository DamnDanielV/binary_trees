#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: a pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_l_node, *new_leaf_node;

	if (parent)
	{
		left_l_node = parent->left;
		new_leaf_node = malloc(sizeof(binary_tree_t));

		if (new_leaf_node)
		{
			new_leaf_node->parent = parent;
			new_leaf_node->left = left_l_node;
			new_leaf_node->right = NULL;
			new_leaf_node->n = value;
			if (left_l_node)
				left_l_node->parent = new_leaf_node;
		}
		parent->left = new_leaf_node;
	}
	else
		new_leaf_node = NULL;

	return (new_leaf_node);
}