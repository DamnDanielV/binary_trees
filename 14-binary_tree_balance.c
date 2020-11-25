#include "binary_trees.h"
/**
 * binary_tree_height2 - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height of the binary tree
 */
size_t binary_tree_height2(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree)
	{
		r = binary_tree_height2(tree->right) + 1;
		l = binary_tree_height2(tree->left) + 1;
		return (r > l ? r : l);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t r, l, bal = 0;

	if (tree)
	{
		l = binary_tree_height2(tree->left);
		r = binary_tree_height2(tree->right);
		bal = l - r;
	}
	return (bal);
}
