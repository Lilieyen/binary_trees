#include "binary_trees.h"

/**
 *binary_tree_node - create a binary tree.
 *@parent: the parent node.
 *@value: the new value
 *Return: the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tmp = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (!tmp)
return (NULL);

tmp->n = value;
tmp->parent = parent;
tmp->left = NULL;
tmp->right = NULL;

return (tmp);
}
