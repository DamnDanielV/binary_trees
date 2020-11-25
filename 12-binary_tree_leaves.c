#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of leaves or 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t le = 0, check_n;

	if (tree)
	{
		le += binary_tree_leaves(tree->left);
		le += binary_tree_leaves(tree->right);
	}
	check_n = tree && (!tree->left && !tree->right);
	return (le + check_n);
}
