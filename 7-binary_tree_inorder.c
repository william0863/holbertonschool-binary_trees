#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversals
 * @tree: tree
 * @func: functions
 * Return: void
 */
void binary_tree_inorde(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
