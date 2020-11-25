#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0 if is full or not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (tree->right && !tree->left) || (tree->left && !tree->right))
	return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
