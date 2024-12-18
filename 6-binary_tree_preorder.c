#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * If tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
{
if (tree == NULL || func == NULL)
return;

func(tree->n); /* Visit the current node */
binary_tree_preorder(tree->left, func); /* Traverse the left subtree */
binary_tree_preorder(tree->right, func); /* Traverse the right subtree */
}}
