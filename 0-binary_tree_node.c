#include "binary_trees.h"
/**
* binary_tree_node - function thats creates a binary tree node
* @parent: pointer to the parent node of the node to create
* @value: value to put in the new node
* Return: a pointer to the new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_leaf_node;

	new_leaf_node = malloc(sizeof(binary_tree_t));

	if (new_leaf_node)
	{
		new_leaf_node->parent = parent;
		new_leaf_node->right = NULL;
		new_leaf_node->left = NULL;
		new_leaf_node->n = value;
	}
	return (new_leaf_node);
}
