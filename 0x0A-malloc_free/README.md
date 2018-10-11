In this project, I learned about the difference between automatic and dynamic location and how to use `malloc`, `free`, and `valgrind` in C.

---

* `holberton.h`: Header file containing prototypes for all functions written in the project.

---

* `0-create_array.c`: C function that returns a pointer to a newly-allocated space in memory containing an array of characters.
  * The array of characters is initialized to a specific char `c` received as parameter.
  * If the function fails or receives a size parameter equal to `0` - returns `NULL`.

* `1-strdup.c`: C function that returns a pointer to a newly-allocated space in memory containing a copy of the string passed as parameter.
  * Returns a pointer to a new string which is a duplicate of the string `str`.
  * Memory for the new string is obtained with `malloc` and can be freed with `free`.
  * If `str` is `NULL` or insufficient memory was available - returns `NULL`.

* `2-str_concat.c`: C function that returns a pointer to a newly-allocated space in memory containing the concatenation of two strings passed as parameters.
  * The returned pointer contains the contents of `s1` followed by `s2` and is null-terminated.
  * The function treats `NULL` as an empty string.
  * If the function fails - returns `NULL`.

* `3-alloc_grid.c`: C function that returns a pointer to a newly-allocated space in memory containing a two-dimensional array of integers.
  * Each element of the two-dimensional array is initialized to `0`.
  * If the function fails or either of `width` or `height` is `0` or negative - returns `NULL`.

* `4-free_grid.c`: C function that frees a two-dimensional array previsouly created by the `alloc_grid` function defined in `3-alloc_grid.c`.
  * The program does not crash upon receiving invalid two-dimensional arrays.

* `5-argstostr.c`: C function that returns a pointer to a newly-allocated space in memory containing the concatenation of all the arguments of the program.
  * Each argument is followed by a `\n` in the new string.
  * If `ac == 0`, `av == NULL`, or the function fails - returns `NULL`.

* `100-strtow.c`: C function that splits a string into words.
  * Returns a pointer to a newly-allocated space in memory containing an array of strings (words).
  * Each element of the array of strings contains a single word, null-terminated.
  * The last element of the returned array is `NULL`.
  * Words are separated by spaces.
  * If `str == NULL`, `str == ""`, or the function fails - returns `NULL`.
