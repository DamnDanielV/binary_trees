#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t r, l, s;

	if (tree)
	{
		r = binary_tree_size(tree->right) + 1;
		l = binary_tree_size(tree->left) + 1;
		s = r + l - (tree->parent ? 0 : 1);
		return (s ? s : 1);
	}
	return (0);
}
