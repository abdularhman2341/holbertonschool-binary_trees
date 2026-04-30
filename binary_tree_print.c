#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left)
	{
		printf("(");
		binary_tree_print(tree->left);
		printf(")--.");
	}
	printf("(%03d)", tree->n);
	if (tree->right)
	{
		printf("--(");
		binary_tree_print(tree->right);
		printf(")");
	}
	printf("\n");
}
