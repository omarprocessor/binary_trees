#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: The number of leaves. If tree is NULL, return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
{
if (tree == NULL)
return (0);

/* A leaf node is a node with no children */
if (tree->left == NULL && tree->right == NULL)
return (1);

/* Recursively count leaves in the left and right subtrees */
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
}
