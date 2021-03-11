#include "binary_trees.h"

/**
 *binary_tree_depth - func that measures the depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *Return: 0 if function is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
