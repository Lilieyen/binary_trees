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
 *binary_tree_height - measures height of a binary tree
 *@tree: is a pointer to the root node of our tree
 *Return: the height of tree, if tree is empty return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left >= right)
		{
			return (left + 1);
		}
		else
			return (right + 1);
	}
}
