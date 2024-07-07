#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If the current node has at least one child, return 1 */
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	/* If the current node is a leaf (no children), return 0 */
	return (0);
}
