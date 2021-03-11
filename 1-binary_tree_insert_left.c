#include "binary_trees.h"

/**
 *binary_tree_insert_left - insert node at left
 *@parent: parent of the node.
 *@value: the value to insert at the left.
 *Return: the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *parent_prev_left_child;
binary_tree_t *new_node;

if (!parent)
return (NULL);

new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);

parent_prev_left_child = parent->left;
new_node->n = value;
if (!parent_prev_left_child)
new_node->left = NULL;
else
{
new_node->left = parent_prev_left_child;
}
new_node->right = NULL;
new_node->parent = parent;
parent->left = new_node;

return (new_node);
}
