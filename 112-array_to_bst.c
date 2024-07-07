#include "binary_trees.h"

/**
 * array_to_bst - Builds a Binary Search Tree from an array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 *
 * Return: Pointer to the root node of the created BST,
 * NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (bst_insert(&root, array[i]) == NULL)
			return (NULL);
	}

	return (root);
}
