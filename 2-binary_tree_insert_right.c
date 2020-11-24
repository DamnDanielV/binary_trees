#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_l_node, *new_leaf_node;

	if (parent)
	{
		right_l_node = parent->right;
		new_leaf_node = malloc(sizeof(binary_tree_t));

		if (new_leaf_node)
		{
			new_leaf_node->parent = parent;
			new_leaf_node->left = NULL;
			new_leaf_node->right = right_l_node;
			new_leaf_node->n = value;
			if (right_l_node)
				right_l_node->parent = new_leaf_node;
		}
		parent->right = new_leaf_node;
	}
	else
		new_leaf_node = NULL;

	return (new_leaf_node);
}
