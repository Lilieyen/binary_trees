#include "binary_trees.h"

/**
 *binary_tree_is_root - check if a node is root.
 *@node: the node to check.
 *Return: 1 if node is root and 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
if (!node || node->parent)
return (0);

return (1);
}
