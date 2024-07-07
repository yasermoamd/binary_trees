#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: Number of leaves in the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left, leaves_right;

	if (tree == NULL)
		return (0);

	/* If the current node is a leaf, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursive call to count leaves in left and right subtrees */
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);

	/* Return the sum of leaves in left and right subtrees */
	return (leaves_left + leaves_right);
}
