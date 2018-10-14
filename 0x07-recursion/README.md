In this project, I learned about recursion.

---

* `_putchar.c`: C function that writes a character to `stdout`.
* `holberton.h`: Header file containing prototypes for all functions written in the project.

| File                      | Prototype                             |
| ------------------------- | ------------------------------------- |
| `0-puts_recursion.c`      | `void _puts_recursion(char *s);`      |
| `1-print_rev_recursion.c` | `void _print_rev_recursion(char *s);` |
| `2-strlen_recursion.c`    | `int _strlen_recursion(char *s);`     |
| `3-factorial.c`           | `int factorial(int n);`               |
| `4-pow_recursion.c`       | `int _pow_recursion(int x, int y);`   |
| `5-sqrt_recursion.c`      | `int _sqrt_recursion(int n);`         |
| `6-is_prime_number.c`     | `int is_prime_number(int n);`         |
| `7-is_palindrome.c`       | `int is_palindrome(char *s);`         |
| `100-wildcmp.c`           | `int wildcmp(char *s1, char *s2);`    |

---

* `0-puts_recursion.c`: C function that prints a string, followed by a new line.
* `1-print_rev_recursion.c`: C function that prints a string in reverse.
* `2-strlen_recursion.c`: C function that returns the length of a string.
* `3-factorial.c`: C function that returns the factorial of a given number.
* `4-pow_recursion.c`: C function that returns the value of a number `x` raised to the value of an input `y`.
  * If `y` is less than `0`, the function returns `-1`.

* `5-sqrt_recursion.c`: C function that returns the natural square root of a number.
  * If the number does not have a natural square root, the function returns `-1`.

* `6-is_prime_number.c`: C function that checks in an integer is a prime number.
  * If the integer is prime, the function returns `1`.
  * Otherwise, the function returns `0`.

* `7-is_palindrome.c`: C function that checks if a string is a palindrome.
  * If the string is a palindrome, the function returns `1`.
  * Otherwise, the function returns `0`.

* `100-wildcmp.c`: C function that compares two strings `s1` and `s2`.
  * `s2` can contain the special character `*`.
  * If the strings can be considered identical, the function returns `1`.
  * Otherwise, the function returns `0`.
