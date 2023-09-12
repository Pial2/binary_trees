#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: a double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: a pointer to the created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root, *last, **pointer;

	if (!tree)
	{
		root = binary_tree_node(NULL, value);
		if (!root)
			return (NULL);
		tree = &root;
		return (root);
	}
	if (!(*tree))
	{
