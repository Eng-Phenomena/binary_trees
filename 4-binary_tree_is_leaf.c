#include "binary_trees.h"

/**
 * binary_tree_is_leaf - know if a node is a leaf
 * @node: node
 * Return: leaf->1 not->0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
