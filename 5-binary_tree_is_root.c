#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root of a tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
{
if (!node)
return (0);

/* A root node is the only node with no parent */
return (node->parent == NULL);
}
}
