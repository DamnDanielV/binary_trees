#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height or 0 if fails
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		return (r > l ? r : l);
	}
	else
		return (0);
}
