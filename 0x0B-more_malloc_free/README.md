# C - More malloc, free

In this project, I learned about using `exit`, `calloc`, and `realloc` in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all functions written in
the project.

| File                 | Prototype                                                                  |
| -------------------- | -------------------------------------------------------------------------- |
| `0-malloc_checked.c` | `void *malloc_checked(unsigned int b);`                                    |
| `1-string_nconcat.c` | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                |
| `2-calloc.c`         | `char *string_nconcat(char *s1, char *s2, unsigned int n);`                |
| `3-array_range.c`    | `int *array_range(int min, int max);`                                      |
| `100-realloc.c`      | `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);` |

## Tasks :page_with_curl:

* **0. Trust no one**
  * [0-malloc_checked.c](./0-malloc_checked.c): C function that returns a
  pointer to a newly-allocated space in memory using `malloc`.
    * If `malloc` fails, the function causes normal process termination with a status value
    of `98`.

* **1. string_nconcat**
  * [1-string_nconcat.c](./1-string_nconcat.c): C function that returns a pointer to a
  newly-allocated space in memory containing the concatenation of two strings.
    * The returned pointer contains `s1` followed by the first `n` bytes
    of `s2`, null-terminated.
    * If `n` is greater than or equal to the length of `s2`, the entire string `s2` is used.
    * If `NULL` is passed, the function treats the parameter as an empty string.
    * If the function fails - returns `NULL`.

* **2. _calloc**
  * [2-calloc.c](./2-calloc.c): C function that returns a pointer to a newly-allocated space
  in memory for an array, using `malloc`.
    * Allocates memory for an array of `nmemb` elements of `size` bytes each.
    * The memory is set to zero.
    * If `nmemb` = 0, `size` = `0`, or the function fail - returns `NULL`.

* **3. array_range**
  * [3-array_range.c](./3-array_range.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers.
    * The array contains all the values from parameters `min` to `max`, inclusive,
    ordered from `min` to `max`.
    * If `min > max` or the function fails - returns `NULL`.

* **4. _realloc**
  * [100-realloc.c](./100-realloc.c): C function that reallocates a memory block using
  `malloc` and `free`.
    * The parameter `ptr` is a pointer to the memory previously allocated with
    a call to `malloc: malloc(old_size)`.
    * The paramter `old_size` is the size, in bytes, of the allocated space for `ptr`.
    * The paramter `new_size` is the new size, in bytes, of the new memory block.
    * The contens of `ptr` are copied to the newly-allocated space in the range from the
    start of `ptr` up to the minimum of `old_size` and `new_size`.
    * If `new_size` > `old_size`, the "added" memory is not initialized.
    * If `new_size` == `old_size`, the function returns `ptr`.
    * If `ptr` is `NULL`, the call is equivalent to `malloc(new_size)` for all values of
    `old_size` and `new_size`.
    * If `new_size` = 0 and `ptr` is not `NULL`, the call is equivalent to
    `free(ptr)` and the function returns `NULL`.

* **5. We must accept finite disappointment, but never lose infinite hope**
  * [101-mul.c](./101-mul.c): C program that multiplies two positive numbers.
    * Usage: `mul num1 num2`.
    * The function assumes `num1` and `num2` are passed in base 10.
    * Prints the result followed by a new line.
    * If the number of arguments is incorrect or either of `num1` or `num2`
    contains non-digits, the function prints `Error` followed by a new line and
    exits with a status of `98`.
