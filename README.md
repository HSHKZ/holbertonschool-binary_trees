<<<<<<< HEAD
# C - Binary Trees

This project provides a comprehensive implementation of binary trees in C. It includes a range of functions for creating, manipulating, and analyzing binary trees, following the Betty coding style and adhering to the GNU89 standard.

## Table of Contents

- [Functionality](#functionality)
- [Files](#files)
- [Compilation/Installation](#compilationinstallation)
- [Requirements](#requirements)
- [Examples](#examples)
- [Testing](#testing)
- [Authors](#authors)

## Functionality

The binary tree library supports the following operations:

- **Create and Delete Nodes**:
  - `create_node(int value)`: Create a new node with a given value.
  - `delete_tree(binary_tree_t *tree)`: Free all memory associated with the tree.

- **Insert Nodes**:
  - `insert_left(binary_tree_t *parent, int value)`: Insert a node as the left child of a given parent.
  - `insert_right(binary_tree_t *parent, int value)`: Insert a node as the right child of a given parent.

- **Node Checks**:
  - `is_leaf(const binary_tree_t *node)`: Check if a node is a leaf.
  - `is_root(const binary_tree_t *node)`: Check if a node is the root of the tree.

- **Tree Traversals**:
  - `preorder_traversal(const binary_tree_t *tree)`: Print nodes in preorder.
  - `inorder_traversal(const binary_tree_t *tree)`: Print nodes in inorder.
  - `postorder_traversal(const binary_tree_t *tree)`: Print nodes in postorder.

- **Tree Properties**:
  - `tree_height(const binary_tree_t *tree)`: Calculate the height of the tree.
  - `tree_depth(const binary_tree_t *node)`: Calculate the depth of a specific node.
  - `tree_size(const binary_tree_t *tree)`: Measure the size (total number of nodes) of the tree.
  - `tree_leaves(const binary_tree_t *tree)`: Count the number of leaf nodes.
  - `tree_nodes(const binary_tree_t *tree)`: Count the nodes with at least one child.
  - `tree_balance(const binary_tree_t *tree)`: Calculate the balance factor of the tree.
  - `is_full(const binary_tree_t *tree)`: Check if the tree is full.
  - `is_perfect(const binary_tree_t *tree)`: Check if the tree is perfect.

- **Sibling and Uncle Relationships**:
  - `find_sibling(binary_tree_t *node)`: Find the sibling of a given node.
  - `find_uncle(binary_tree_t *node)`: Find the uncle of a given node.

## Files

- **0-binary_tree_node.c**: Function to create a binary tree node.
- **1-binary_tree_insert_left.c**: Function to insert a node as the left child of another node.
- **2-binary_tree_insert_right.c**: Function to insert a node as the right child of another node.
- **3-binary_tree_delete.c**: Function to delete a binary tree.
- **4-binary_tree_is_leaf.c**: Function to check if a node is a leaf.
- **5-binary_tree_is_root.c**: Function to check if a node is the root.
- **6-binary_tree_preorder.c**: Function to perform preorder traversal of the tree.
- **7-binary_tree_inorder.c**: Function to perform inorder traversal of the tree.
- **8-binary_tree_postorder.c**: Function to perform postorder traversal of the tree.
- **9-binary_tree_height.c**: Function to calculate the height of the tree.
- **10-binary_tree_depth.c**: Function to calculate the depth of a specific node.
- **11-binary_tree_size.c**: Function to measure the size of the tree.
- **12-binary_tree_leaves.c**: Function to count the number of leaves in the tree.
- **13-binary_tree_nodes.c**: Function to count nodes with at least one child.
- **14-binary_tree_balance.c**: Function to calculate the balance factor of the tree.
- **15-binary_tree_is_full.c**: Function to check if the tree is full.
- **16-binary_tree_is_perfect.c**: Function to check if the tree is perfect.
- **17-binary_tree_sibling.c**: Function to find the sibling of a node.
- **18-binary_tree_uncle.c**: Function to find the uncle of a node.
- **README.md**: Description and documentation of the project.
- **binary_tree_print.c**: Helper function to print tree structures.
- **binary_trees.h**: Header file with type definitions and function prototypes.
- **main.h**: Test file with additional function prototypes and test cases.

## Compilation/Installation

To use the binary tree library, clone the repository and compile the code:

```bash
git clone https://github.com/your-username/holbertonschool-binary_trees.git

cd holbertonschool-binary_trees

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o binary_trees

## Requirements

- **GCC compiler** (version 4.8.4 or later).
- **Ubuntu 20.04 LTS** or a similar Unix-like operating system.

## Examples

Below are some examples demonstrating how to use the binary tree functions:

```c
#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *root = create_node(10);

    insert_left(root, 5);
    insert_right(root, 15);
    insert_left(root->left, 3);
    insert_right(root->left, 7);
    insert_left(root->right, 12);
    insert_right(root->right, 18);

    printf("Preorder traversal: ");
    preorder_traversal(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorder_traversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder_traversal(root);
    printf("\n");

    printf("Tree height: %d\n", tree_height(root));
    printf("Tree depth of root: %d\n", tree_depth(root));
    printf("Tree size: %d\n", tree_size(root));
    printf("Tree leaves: %d\n", tree_leaves(root));
    printf("Tree balance: %d\n", tree_balance(root));
    printf("Is tree full? %s\n", is_full(root) ? "Yes" : "No");
    printf("Is tree perfect? %s\n", is_perfect(root) ? "Yes" : "No");

    delete_tree(root);
    return (0);
}

## Testing

To test the binary tree functions, follow these steps:

    Create or modify the main.c file to include your test cases.
    Compile the code with:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o binary_trees

    Run the compiled program with:

./binary_tree_test

## Authors

- Lucas Niel - @Lucas Niel
- Ibtissem Bendahma - @Ibtissem Bendahma
=======
# Holberton School Binary trees 
This project contains implementations of various functions to manipulate binary trees in C. It is part of the Holberton School curriculum.

## Description

The project focuses on implementing basic operations on binary trees, including node creation and traversal. It also includes specific functionality to find the uncle of a node in a binary tree.
>>>>>>> feature-branch2
