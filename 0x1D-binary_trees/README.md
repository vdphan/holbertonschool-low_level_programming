# 0x1D. C - Binary trees

## Learning Objectives

General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Requirements

- All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All files are linted for syntax and style with [Betty](https://github.com/holbertonschool/Betty)

## Tasks
Add this structure to header file before compile program.
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```


### [0. New node](./0-binary_tree_node.c)

- Write a function that creates a binary tree node
  - Prototype: binary_tree_t `*binary_tree_node(binary_tree_t *parent, int value)`;
  - Where parent is a pointer to the parent node of the node to create
  - And value is the value to put in the new node
  - When created, a node does not have any child
  - Your function must return a pointer to the new node, or NULL on failure

### [1. Insert left](./1-binary_tree_insert_left.c)

- Write a function that inserts a node as the left-child of another node
  - Prototype: binary_tree_t `*binary_tree_insert_left(binary_tree_t *parent, int value)`;
  - Where parent is a pointer to the node to insert the left-child in
  - And value is the value to store in the new node
  - Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
  - If parent already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.

### [2. Insert right](./2-binary_tree_insert_right.c)

- Write a function that inserts a node as the right-child of another node
  - Prototype: binary_tree_t `*binary_tree_insert_right(binary_tree_t *parent, int value)`;
  - Where parent is a pointer to the node to insert the right-child in
  - And value is the value to store in the new node
  - Your function must return a pointer to the created node, or NULL on failure or if parent is NULL
  - If parent already has a right-child, the new node must take its place, and the old right-child must be set the right-child of the new node.

### [3. Delete](./3-binary_tree_delete.c)

- Write a function that deletes an entire binary tree
  - Prototype: `void binary_tree_delete(binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to delete
  - If tree is NULL, do nothing

### [4. Is leaf](./4-binary_tree_is_leaf.c)

- Write a function that checks if a node is a leaf
  - Prototype: `int binary_tree_is_leaf(const binary_tree_t *node)`;
  - Where node is a pointer to the node to check
  - Your function must return 1 if node is a leaf, otherwise 0
  - If node is NULL, return 0

### [5. Is root](./5-binary_tree_is_root.c)

- Write a function that checks if a given node is a root
  - Prototype: `int binary_tree_is_root(const binary_tree_t *node)`;
  - Where node is a pointer to the node to check
  - Your function must return 1 if node is a root, otherwise 0
  - If node is NULL, return 0

### [6. Pre-order traversal](./6-binary_tree_preorder.c)

- Write a function that goes through a binary tree using pre-order traversal
  - Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))`;
  - Where tree is a pointer to the root node of the tree to traverse
  - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If tree or func is NULL, do nothing

### [7. In-order traversal](./7-binary_tree_inorder.c)

- Write a function that goes through a binary tree using in-order traversal
  - Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))`;
  - Where tree is a pointer to the root node of the tree to traverse
  - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If tree or func is NULL, do nothing

### [8. Post-order traversal](./8-binary_tree_postorder.c)

- Write a function that goes through a binary tree using post-order traversal
  - Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))`;
  - Where tree is a pointer to the root node of the tree to traverse
  - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If tree or func is NULL, do nothing

### [9. Height](./9-binary_tree_height.c)

- Write a function that measures the height of a binary tree
  - Prototype: `size_t binary_tree_height(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to measure the height.
  - If tree is NULL, your function must return 0

### [10. Depth](./10-binary_tree_depth.c)

- Write a function that measures the depth of a node in a binary tree
  - Prototype: `size_t binary_tree_depth(const binary_tree_t *tree)`;
  - Where tree is a pointer to the node to measure the depth
  - If tree is NULL, your function must return 0

### [11. Size](./11-binary_tree_size.c)

- Write a function that measures the size of a binary tree
  - Prototype: `size_t binary_tree_size(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to measure the size
  - If tree is NULL, the function must return 0

### [12. Leaves](./12-binary_tree_leaves.c)

- Write a function that counts the leaves in a binary tree
  - Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to count the number of leaves
  - If tree is NULL, the function must return 0
  - A NULL pointer is not a leaf

### [13. Nodes](./13-binary_tree_nodes.c)

- Write a function that counts the nodes with at least 1 child in a binary tree
  - Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to count the number of nodes
  - If tree is NULL, the function must return 0
  - A NULL pointer is not a node

### [14. Balance factor](./14-binary_tree_balance.c)

- Write a function that measures the balance factor of a binary tree
  - Prototype: `int binary_tree_balance(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to measure the balance factor
  - If tree is NULL, return 0

### [15. Is full](./15-binary_tree_is_full.c)

- Write a function that checks if a binary tree is full
  - Prototype: `int binary_tree_is_full(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to check
  - If tree is NULL, your function must return 0

### [16. Is perfect](./16-binary_tree_is_perfect.c)

- Write a function that checks if a binary tree is perfect
  - Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to check
  - If tree is NULL, your function must return 0

### [17. Sibling](./17-binary_tree_sibling.c)

- Write a function that finds the sibling of a node
  - Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node)`;
  - Where node is a pointer to the node to find the sibling
  - Your function must return a pointer to the sibling node
  - If node is NULL or the parent is NULL, return NULL
  - If node has no sibling, return NULL

### [18. Uncle](./18-binary_tree_uncle.c)

- Write a function that finds the uncle of a node
  - Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node)`;
  - Where node is a pointer to the node to find the uncle
  - Your function must return a pointer to the uncle node
  - If node is NULL, return NULL
  - If node has no uncle, return NULL

### [19. Lowest common ancestor](./100-binary_trees_ancestor.c)

- Write a function that finds the lowest common ancestor of two nodes
  - Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)`;
  - Where first is a pointer to the first node
  - And second is a pointer to the second node
  - Your function must return a pointer to the lowest common ancestor node of the two given nodes
  - If no common ancestor was found, your function must return NULL

### [20. Level-order traversal](./101-binary_tree_levelorder.c)

- Write a function that goes through a binary tree using level-order traversal
  - Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))`;
  - Where tree is a pointer to the root node of the tree to traverse
  - And func is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
  - If tree or func is NULL, do nothing

### [21. Is complete](./102-binary_tree_is_complete.c)

- Write a function that checks if a binary tree is complete
  - Prototype: `int binary_tree_is_complete(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to check
  - If tree is NULL, your function must return 0

### [22. Rotate left](./103-binary_tree_rotate_left.c)

- Write a function that performs a left-rotation on a binary tree
  - Prototype: `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to rotate
  - Your function must return a pointer to the new root node of the tree once rotated

### [23. Rotate right](./104-binary_tree_rotate_right.c)

- Write a function that performs a right-rotation on a binary tree
  - Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to rotate
  - Your function must return a pointer to the new root node of the tree once rotated

### [24. Is BST](./110-binary_tree_is_bst.c)

- Write a function that checks if a binary tree is a valid Binary Search Tree

  - Prototype: `int binary_tree_is_bst(const binary_tree_t *tree)`;
  - Where tree is a pointer to the root node of the tree to check
  - Your function must return 1 if tree is a valid BST, and 0 otherwise
  - If tree is NULL, return 0

Properties of a Binary Search Tree:

- The left subtree of a node contains only nodes with values less than the node’s value
- The right subtree of a node contains only nodes with values greater than the node’s value
- The left and right subtree each must also be a binary search tree
- There must be no duplicate values

### [25. BST - Insert](./111-bst_insert.c)

- Write a function that inserts a value in a Binary Search Tree
  - Prototype: `bst_t *bst_insert(bst_t **tree, int value)`;
  - Where tree is a double pointer to the root node of the BST to insert the value
  - And value is the value to store in the node to be inserted
  - Your function must return a pointer to the created node, or NULL on failure
  - If the address stored in tree is NULL, the created node must become the root node.
  - If the value is already present in the tree, it must be ignored

### [26. BST - Array to BST](./112-array_to_bst.c)

- Write a function that builds a Binary Search Tree from an array
  - Prototype: `bst_t *array_to_bst(int *array, size_t size)`;
  - Where array is a pointer to the first element of the array to be converted
  - And size is the number of element in the array
  - Your function must return a pointer to the root node of the created BST, or NULL on failure
  - If a value of the array is already present in the tree, this value must be ignored

### [27. BST - Search](./113-bst_search.c)

- Write a function that searches for a value in a Binary Search Tree
  - Prototype: `bst_t *bst_search(const bst_t *tree, int value)`;
  - Where tree is a pointer to the root node of the BST to search
  - And value is the value to search in the tree
  - Your function must return a pointer to the node containing a value equals to value
  - If tree is NULL or if nothing is found, your function must return NULL

### [29. Big O #BST](./115-O)

- What are the average time complexities of those operations on a Binary Search Tree (one answer per line):
  - Inserting the value n
  - Removing the node with the value n
  - Searching for a node in a BST of size n

### [35. Big O #AVL Tree](./125-O)

- What are the average time complexities of those operations on an AVL Tree (one answer per line):
  - Inserting the value n
  - Removing the node with the value n
  - Searching for a node in an AVL tree of size n

### [41. Big O #Binary Heap](./135-O)

- What are the average time complexities of those operations on a Binary Heap (one answer per line):

  - Inserting the value n
  - Extracting the root node
  - Searching for a node in a binary heap of size n

## Author

- **Van Phan** - [vdphan](https://github.com/vdphan)
