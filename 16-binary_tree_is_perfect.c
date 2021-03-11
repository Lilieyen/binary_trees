#include "binary_trees.h"

/**
 *binary_tree_is_perfect - check if tree is perfect
 *@tree: the tree.
 *Return: 1 if it's perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int depth_l, depth_r;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
{
depth_l = binary_tree_depth(tree->left);
depth_r = binary_tree_depth(tree->right);

if (depth_l == depth_r)
return (1);

}

if ((tree->left) && (tree->right))
{
if (binary_tree_is_perfect(tree->left))
{
if (binary_tree_is_perfect(tree->right))
{
return (depth_l && depth_r);
}
}
}

return (0);
}


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
