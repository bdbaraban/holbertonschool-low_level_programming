# C - Even more pointers, arrays and strings

In this project, I learned about what and how to use pointers to pointers
and multidimensional arrays in C as well as the most common C standard library
functions to manipulate strings.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all functions written
in the project.

| File         | Prototype                                               |
| ------------ | ------------------------------------------------------- |
| `0-memset.c` | `char *_memset(char *s, char b, unsigned int n);`       |
| `1-memcpy.c` | `char *_memcpy(char *dest, char *src, unsigned int n);` |
| `2-strchr.c` | `char *_strchr(char *s, char c);`                       |
| `3-strspn.c` | `unsigned int _strspn(char *s, char *accept);`          |
| `4-strpbrk.c` | `char *_strpbrk(char *s, char *accept);`               |
| `5-strstr.c` | `char *_strstr(char *haystack, char *needle);`          |
| `7-print_chessboard.c` | `void print_chessboard(char (*a)[8]);`        |
| `8-print_diagsums.c` | `void print_diagsums(int *a, int size);`        |
| `9-set_string.c` | `void set_string(char **s, char *to);`              |

## Tasks :page_with_curl:

* **0. memset**
  * [0-memset.c](./0-memset.c): C function that fills the first `n` bytes of
  memory area pointed to by `s` with the constant byte `b`.
    * Returns a pointer to the filled memory area `s`.

* **1. memcpy**
  * [1-memcpy.c](./1-memcpy.c): C function that copies `n` bytes from memory
  area `src` to memory area `dest`.
    * Returns a pointer to the memory area `dest`.

* **2. strchr**
  * [2-strchr.c](./2-strchr.c): C function that returns a pointer to the first occurence of
  the character `c` in the string `s`.
    * If the character is not found, the function returns `NULL`.

* **3. strspn**
  * [3-strspn.c](./3-strspn.c): C function that returns the number of bytes in the intitial
  segment of memory area `s` which consist only of bytes from a substring `accept`.

* **4. strpbrk**
  * [4-strpbrk.c](./4-strpbrk.c): C function that locates the first occurence in a
  string `s` of any of the bytes in a string `accept`.
    * Returns a pointer to the byte in `s` that matches one of the bytes in `accept`.
    * If no matching byte is found, the function returns `NULL`.

* **5. strstr**
  * [5-strstr.c](./5-strstr.c): C function that finds the first occurence of a
  substring `needle` in a string `haystack`.
    * The terminating null bytes (`\0`) are not compared.
    * Returns a pointer to the beginning of the located substring.
    * If the substring is not found, the function returns `NULL`.

* **6. Chess is mental torture**
  * [7-print_chessboard.c](./7-print_chessboard.c): C function that prints the chessboard.

* **7. The line of life is a ragged diagonal between duty and desire**
  * [8-print_diagsums.c](./8-print_diagsums.c): C function that prints the sum of the two
  diagonals of a square matrix of integers.

* **8. Double pointer, double fun**
  * [9-set_string.c](./9-set_string.c): C function that sets the value of a pointer to a char.

* **9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure**
  * [101-crackme_password](./101-crackme_password): File containing the password for
  the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
