#include "binary_trees.h"
size_t tree_stats(const binary_tree_t *tree, size_t *n)
{
	size_t left_h, right_h;
	if (tree == NULL)
		return (0);
	(*n)++;
	left_h = tree_stats(tree->left, n);
	right_h = tree_stats(tree->right, n);
	if (left_h > right_h)
		return (1 + left_h);
	return (1 + right_h);
}
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, size = 0, expected_size = 1, i;
	if (tree == NULL)
		return (0);
	height = tree_stats(tree, &size);
	for (i = 0; i < height; i++)
		expected_size *= 2;
	if (size == expected_size - 1)
		return (1);
	return (0);
}
