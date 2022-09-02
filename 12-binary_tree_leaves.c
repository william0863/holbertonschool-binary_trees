#include "binary_trees.h"
<<<<<<< HEAD

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
=======
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: tree
 * Return: number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, l = 0, r = 0;

	if (tree == NULL)
		return (0);

	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaf = l + r;
		return ((!l && !r) ? leaf + 1 : leaf + 0);
	}
>>>>>>> e1f866ae6228ba28eab1d78dfd3eb13dfff3f950
}
