# C - Pointers, arrays and strings
In this project, I learned about what and how to use pointers and arrays and the differences between the two as well as how to use and manipulate strings in C.

## Helper Files

* `_putchar.c`: C function that writes a character to `stdout`.
* `holberton.h`: Header file containing prototypes for all functions written in the project.

| File              | Prototype                               |
| ----------------- | --------------------------------------- |
| `0-reset_to_98.c` | `void reset_to_98(int *n);`             |
| `1-swap.c`        | `void swap_int(int *a, int *b);`        |
| `2-strlen.c`      | `int _strlen(char *s);`                 |
| `3-puts.c`        | `void _puts(char *str);`                |
| `4-print_rev.c`   | `void print_rev(char *s);`              |
| `5-rev_string.c`  | `void rev_string(char *s);`             |
| `6-puts2.c`       | `void puts2(char *str);`                |
| `7-puts_half.c`   | `void puts_half(char *str);`            |
| `8-print_array.c` | `void print_array(int *a, int n);`      |
| `9-strcpy.c`      | `char *_strcpy(char *dest, char *src);` |
| `100-atoi.c`      | `int _atoi(char *s);`                   |

## Tasks
* **98 Battery st.**
  * `0-reset_to_98.c`: C function that takes a pointer to an `int` as a parameter and updates the value it points to to `98`.

* **Don't swap horses in crossing a stream**
  * `1-swap.c`: C function that swaps the value of two integers.

* **This report, by its very length, defends itself against the risk of being read**
  * `2-strlen.c`: C function that returns the length of a string.

* **I do not fear computers. I fear the lack of them**
  * `3-puts.c`: C function that prints a string, followed by a new line, to `stdout`.

* **I can only go one way. I've not got a reverse gear**
  * `4-print_rev.c`: C function that prints a string, in reverse, followed by a new line.

* **A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes**
  * `5-rev_string.c`: C function that reverses a string.

* **Half the lies they tell about me aren't true**
  * `6-puts2.c`: C function that prints every other character of a string, followed by a new line.

* **Winning is only half of it. Having fun is the other half**
  * `7-puts_half.c`: C function that prints the second half of a string, followed by a new line.

* **Arrays are not pointers**
  * `8-print_array.c`: C function that prints an input `n` elements of an array of integers, followed by a new line.
    * Numbers are separated by a comma followed by a space.
    * Numbers are displayed in the same order as they are stored in the array.

* **strcpy**
  * `9-strcpy.c`: C function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
    * Returns the pointer to `dest`.

* **Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers**
  * `100-atoi.c`: C function that converts a string to an integer without using `long`, new variable arrays, or hard-coded special values, as follows:
    * The number in the string can be preceded by an infinite number of characters.
    * Takes into account all `+` and `-` signs before the number.
    * If there are no numbers in the string, the function returns `0`.

* **Don't hate the hacker, hate the code**
  * `101-keygen.c`: C program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c).
