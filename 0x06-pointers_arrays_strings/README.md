In this project, I learned about pointers to pointers and multidimensional arrays while practicing manipulating strings.

---

* `holberton.h`: Header file containing prototypes for all functions written in the project.
* `_putchar.c`: C function that writes a character to `stdout`.

---

* `0-memset.c`: C function that fills the first `n` bytes of memory area pointed to by `s` with the constant byte `b`.
  * Returns a pointer to the filled memory area `s`.

* `1-memcpy.c`: C function that copies `n` bytes from memory area `src` to memory area `dest`.
  * Returns a pointer to to memory area `dest`.

* `2-strchr.c`: C function that returns a pointer to the first occurence of the character `c` in the string `s`.
  * If the character is not found, the function returns `NULL`.

* `3-strspn.c`: C function that returns the number of bytes in the intitial segment of memory area `s` which consist only of bytes from a substring `accept`.
  * Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`.

* `4-strpbrk.c`: C function that locates the first occurence in a string `s` of any of the bytes in a string `accept`.
  * Returns a pointer to the byte in `s` that matches one of the bytes in `accept`.
  * If no matching byte is found, the function returns `NULL`.

* `5-strstr.c`: C function that finds the first occurence of a substring `needle` in a string `haystack`.
  * The terminating null bytes (`\0`) are not compared.
  * Returns a pointer to the beginning of the located substring.
  * If the substring is not found, the function returns `NULL`.

* `7-print_chessboard.c`: C function that prints the chessboard.
* `8-print_diagsums.c`: C function that prints the sum of the two diagonals of a square matrix of integers.
* `9-set_string.c`: C function that sets the value of a pointer to a char.
* `101-crackme_password`: File containing the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
