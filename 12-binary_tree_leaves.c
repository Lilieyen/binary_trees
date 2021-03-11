#include "binary_trees.h"

/**
 *binary_tree_leaves - count the number of leaves.
 *@tree: the root.
 *Return: the number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t number_leaves = 0;

if (tree == NULL)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);
else
{
number_leaves += binary_tree_leaves(tree->left);
number_leaves += binary_tree_leaves(tree->right);
return (number_leaves);
}

}
