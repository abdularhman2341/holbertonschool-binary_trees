#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (!node || !node->parent || !node->parent->parent ? NULL : node->parent->parent->left == node->parent ? node->parent->parent->right : node->parent->parent->left);
}
