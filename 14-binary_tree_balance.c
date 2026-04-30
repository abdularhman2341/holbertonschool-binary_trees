#include "binary_trees.h"

/**
 * height - measures height including current node
 * @tree: pointer to node
 *
 * Return: height
 */
static size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + (height(tree->left) > height(tree->right) ?
		height(tree->left) : height(tree->right)));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}
