#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert node at left
 *@parent: parent of the node.
 *@value: the value to insert at the left.
 *Return: the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;

if (parent->right == NULL)
{
new_node->right = NULL;
parent->right = new_node;
}
else
{
new_node->right = parent->right;
parent->right = new_node;
new_node->right->parent = new_node;
}

return (new_node);
}
