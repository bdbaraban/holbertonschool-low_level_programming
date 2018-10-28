# C - Singly linked lists
In this project, I practiced building and using linked lists in C while learning when and why to use linked lists versus arrays.

## Helper File
* `lists.h`: Header file containing definitions and prototypes for all types and functions written for the project.

| Type/File          | Definition/Prototype                                                                   |
| ------------------ | -------------------------------------------------------------------------------------- |
| `struct list_s`    | <ul><li>`char *str`</li><li>`unsigned int len`</li><li>`struct list_s *next`</li></ul> |
| `0-print_list.c`   | `size_t print_list(const list_t *h);`                                                  |
| `1-list_len.c`     | `size_t list_len(const list_t *h);`                                                    |
| `2-add_node.c`     | `list_t *add_node(list_t **head, const char *str);`                                    |
| `3-add_node_end.c` | `list_t *add_node_end(list_t **head, const char *str);`                                |
| `4-free_list.c`    | `void free_list(list_t *head)`                                                         |

## Tasks
* **Print list**
  * `0-print_list.c`: C function that prints all the elements of a `list_t` list.
    * If `str` is `NULL`, the function prints `[0] (nil)`.

* **List length**
  * `1-list_len.c`: C function that returns the number of elements in a linked `list_t` list.

* **Add node**
  * `2-add_node.c`: C function that adds a new node at the beginning a of a `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **Add node at the end**
  * `3-add_node_end.c`: C function that adds a new node at the end of a linked `list_t` list.
    * If the function fails - returns `NULL`.
    * Otherwise - returns the address of the new element.

* **Free list**
  * `4-free_list.c`: C function that frees a `list_t` list.

* **The Hare and the Tortoise**
  * `100-first.c`: C function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.

* **Real programmers can write assembly code in any language**
  * `101-hello_holberton.asm`: 64-but assembly program that prints `Hello, Holberton` followed by a new line using only the `printf` function witout interrupts.
