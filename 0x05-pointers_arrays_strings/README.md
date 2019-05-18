# C - More pointers, arrays and strings

In this project, I continued to practice using pointers, arrays and strings in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all
functions written in the project.

| File                 | Prototype                                                      |
| -------------------- | -------------------------------------------------------------- |
| `0-strcat.c`         | `char *_strcat(char *dest, char *src);`                        |
| `1-strncat.c`        | `char *_strncat(char *dest, char *src, int n);`                |
| `2-strncpy.c`        | `char *_strncpy(char *dest, char *src, int n);`                |
| `3-strcmp.c`         | `int _strcmp(char *s1, char *s2);`                             |
| `4-rev_array.c`      | `void reverse_array(int *a, int n);`                           |
| `5-string_toupper.c` | `char *string_toupper(char *);`                                |
| `6-cap_string.c`     | `char *cap_string(char *);`                                    |
| `7-leet.c`           | `char *leet(char *);`                                          |
| `8-rot13.c`          | `char *rot13(char *);`                                         |
| `100-print_number.c` | `void print_number(int n);`                                    |
| `102-infinite_add.c` | `char *infinite_add(char *n1, char *n2, char *r, int size_r);` |
| `103-print_buffer.c` | `void print_buffer(char *b, int size);`                        |

## Tasks :page_with_curl:

* **0. strcat**
  * [0-strcat.c](./0-strcat.c): C function that concatenates two strings.
    * Adds a terminating null byte at end.

* **1. strncat**
  * [1-strncat.c](./1-strncat.c): C function that concatenates two strings using at most
  an inputted number of bytes.
    * Adds a terminating null byte at end, unless source string is longer than maximum byte
    number.

* **2. strncpy**
  * [2-strncpy.c](./2-strncpy.c): C function that copies a string, including the
  terminating null byte, using at most an inputted number of bytes.
    * If the length of the source string is less than the maximum byte number,
    the remainder of the destination string is filled with null bytes.
    * Works identically to the standard library function `strncpy`.

* **3. strcmp**
  * [3-strcmp.c](./3-strcmp.c): C function that compares two strings.
    * Returns the difference in bytes at point of difference.
    * Works identically to the standard library function `strcmp`.

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  * [4-rev_array.c](./4-rev_array.c): C function that reverses the content of an
  array of integers.

* **5. Always look up**
  * [5-string_toupper.c](./5-string_toupper.c): C function that changes all lowercase
  letters of a string to uppercase.

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  * [6-cap_string.c](./6-cap_string.c): C function that capitalizes all words of a string.

* **7. Mozart composed his music not for the elite, but for everybody**
  * [7-leet.c](./7-leet.c): C function that encodes a string into 1337, without
  `switch` or ternary operations and using only one `if` and two loops.
    * Letters `a` and `A` are replaced by `4`.
    * Leters `e` and `E` are replaced by `3`.
    * Letters `o` and `O` are replaced by `0`.
    * Letters `t` and `T` are replaced by `7`.
    * Letters `l` and `L` are replaced by `1`.

* **8. rot13**
  * [8-rot13.c](./8-rot13.c): C function that encodes a string to rot13, without
  `switch` or ternary operations and using only one `if` and two loops.

* **9. Numbers have life; they're not just symbols on paper**
  * [100-print_number.c](./100-print_number.c): C function that prints an integer
  without using `long`, arrays, pointers, or hard-coded special values.

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  * [101-magic.c](./101-magic.c): C program that prints `a[2] = 98` using pointer magic.
    * Completion of [this source code](https://github.com/holbertonschool/make_magic_happen/blob/master/magic.c).

* **11. It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * [102-infinite_add.c](./102-infinite_add.c): C function that adds two numbers stored
  in strings to a buffer.
    * Assumes that strings are never empty and that numbers will always be positive, or 0.
    * Assumes there are only digits stored in the number strings.
    * If result can be stored in the buffer, returns a pointer to the result.
    * If result cannot be stored in the buffer, returns `0`.

* **12. Noise is a buffer, more effective than cubicles or booth walls**
  * [103-print_buffer.c](./103-print_buffer.c): C function that prints the content of an
  inputted number of bytes from a buffer.
    * Prints 10 bytes per line.
    * Starts with the position of the first byte in hexadecimal (8 chars), starting with `0`.
    * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space.
    * Each line shows the content of the buffer. Prints the byte if it is printable; if not, prints `.`.
    * Each line ends with a new line `\n`.
    * If the inputted byte size is 0 or less, the function only prints a new line.
