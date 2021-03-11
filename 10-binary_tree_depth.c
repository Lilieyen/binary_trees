#include "binary_trees.h"

/**
 *binary_tree_is_leaf - check if a node tree is a leaf.
 *@node: the node to check.
 *Return: 1 if it's a leaf and 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);

if (!node->left && !node->right)
return (1);

return (0);
}

#include "binary_trees.h"

/**
 *binary_tree_depth - func that measures the depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *Return: 0 if function is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	left = binary_tree_depth(tree->left);
	right = binary_tree_depth(tree->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}
