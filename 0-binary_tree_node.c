#include "binary_trees.h"

/**
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *tmp, *current, *p; 

tmp = (struct binary_tree_t *)malloc(sizeof(binary_tree_t));
tmp->n = value;

if (!parent)
{
parent = tmp;
return parent;
}

current = parent, p = NULL;

while (1)
{
p = current;

if (value < p->n)
{
current = current->left;

if (!current)
{
p->left = tmp, tmp->parent = p;
return tmp;
}
}

else 
{
current = current->right;

if (!current)
{
p->right = tmp, tmp->parent = p;
return tmp;
}
}
}
}  