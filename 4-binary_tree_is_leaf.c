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
