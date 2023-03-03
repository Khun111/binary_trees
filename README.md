# C - Binary trees

This was a partner project in which we learned about the details, advantages,
and disadvantages of using trees as data structures. We learned about how to
qualify trees as well as how to traverse them. Throughout the project, we
implemented binary, binary search, AVL, and Max Binary Heap trees.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files for all tasks. Provided by Holberton
School.

## Helper File :raised_hands:

* [binary_tree_print.c](./binary_tree_print.c): C function that prints binary
trees in a pretty way.

## Header File :file_folder:

* [binary_trees.h](./binary_trees.h): Header file containing definitions and
prototypes for all types and functions written for the project.

- void binary_tree_print(const binary_tree_t *);
- binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
- binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
- binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
- void binary_tree_delete(binary_tree_t *tree);
- int binary_tree_is_leaf(const binary_tree_t *node);
- int binary_tree_is_root(const binary_tree_t *node);
- void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
