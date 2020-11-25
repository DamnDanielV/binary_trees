#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count
 * Return: number of nodes or NULL on failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no = 0, check_nodes;

	if (tree)
	{
		no += binary_tree_nodes(tree->left);
		no += binary_tree_nodes(tree->right);
	}
	check_nodes = tree && (tree->left || tree->right);
	return (no + check_nodes);
}
