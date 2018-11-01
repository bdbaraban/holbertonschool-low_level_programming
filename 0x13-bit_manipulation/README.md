# C - Bit manipulation

In this project, I learned how to manipulate bits and use the bitwise operators `>>`, `<<`, `&`, `|`, and `^` in C.

## Helper File

* `holberton.h`: Header file containing prototypes for all functions written in the project.

| File                 | Prototype                                     |
| `0-binary_to_uint.c` | `unsigned int binary_to_uint(const char *b);` |

## Tasks
* **0**
  * `0-binary_to_uint.c`: C function that converts a binary number to an `unsigned int`.
  * The parameter `b` is a pointer to a string of `0` and `1` characters.
  * If `b` is `NULL` or there are one or more characters in `b` that are not `0` or `1` - returns `0`.
  * Otherwise - returns the converted number.
