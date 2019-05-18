# C - Bit manipulation

In this project, I learned how to manipulate bits and use the
bitwise operators `>>`, `<<`, `&`, `|`, and `^` in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all
functions written in the project.

| File                   | Prototype                                                           |
| ---------------------- | ------------------------------------------------------------------- |
| `0-binary_to_uint.c`   | `unsigned int binary_to_uint(const char *b);`                       |
| `1-print_binary.c`     | `void print_binary(unsigned long int n);`                           |
| `2-get_bit.c`          | `int get_bit(unsigned long int n, unsigned int index);`             |
| `3-set_bit.c`          | `int set_bit(unsigned long int *n, unsigned int index);`            |
| `4-clear_bit.c`        | `int clear_bit(unsigned long int *n, unsigned int index);`          |
| `5-flip_bits.c`        | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` |
| `100-get_endianness.c` | `int get_endianness(void);`                                         |

## Tasks :page_with_curl:

* **0. 0**
  * [0-binary_to_uint.c](./0-binary_to_uint.c): C function that converts a binary number
  to an `unsigned int`.
  * The parameter `b` is a pointer to a string of `0` and `1` characters.
  * If `b` is `NULL` or there are one or more characters in `b` that are
  not `0` or `1` - returns `0`.
  * Otherwise - returns the converted number.

* **1. 1**
  * [1-print_binary.c](./1-print_binary.c): C function that prints the binary representation
  of a number.

* **2. 10**
  * [2-get_bit.c](./2-get_bit.c): C function that returns the value of a bit at a
  given index.
  * Indices start at `0`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns the value of the bit at the given index.

* **3. 11**
  * [3-set_bit.c](./3-set_bit.c): C function that sets the value of a bit at a given index
  to `1`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* **4. 100**
  * [4-clear_bit.c](./4-clear_bit.c): C function that sets the value of a bit at
  a given index to `0`.
  * If an error occurs - returns `-1`.
  * Otherwise - returns `1`.

* **5. 101**
  * [5-flip_bits.c](./5-flip_bits.c): C function that returns the number of bits needed
  to be flipped to get from one number to another.

* **6. Endianness**
  * [100-get_endianness.c](./100-get_endianness.c): C function that checks the endianness.
  * If big-endian - returns `0`.
  * If little-endian - returns `1`.

* **7. Crackme3**
  * [101-password](./101-password): File containing the password for the
  [crackme3](https://github.com/holbertonschool/0x13.c) executable.
