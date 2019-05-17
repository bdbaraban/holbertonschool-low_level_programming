# C - argc, argv

In this project, I learned about utilizing arguments passed to C functions
with `argc` and `argv` as well as how to use `__attribute__((unused))` or
`void` to compile functions with unused variables or parameters.

## Tasks :page_with_curl:

* **0. It ain't what they call you, it's what you answer to**
  * [0-whatsmyname.c](./0-whatsmyname.c): C program that prints its name,
  followed by a new line.
    * If the program is renamed, the program will print the new name without having
    to be compiled again.
    * The path should not be removed before the name of the program.

* **1. Silence is argument carried out by other means**
  * [1-args.c](./1-args.c): C program that prints the number of arguments passed to
  it, followed by a new line.

* **2. The best argument against democracy is a five-minute conversation with the average voter**
  * [2-args.c](./2-args.c): C program that prints all arguments it receives, including
  the first one.
    * Arguments are printed one per line, ending with a new line.

* **3. Neither irony nor sarcasm is argument**
  * [3-mul.c](./3-mul.c): C program that multiplies two numbers and prints the result,
  followed by a new line.
    * The program assumes the two numbers and result of the multiplication can be
    stored in an `int`.
    * If the program does not receive two arguments, it prints `Error` followed by
    a new line and returns `1`.

* **4. To infinity and beyond**
  * [4-add.c](./4-add.c): C program that adds two positive numbers and prints the result,
  followed by a new line.
    * The program assumes that the numbers and result of the addition can be stored in an `int`.
    * If no number is passed to the program, it prints `0` followed by a new line.
    * If one of the numbers contains symbols that are not digits, the program prints `Error` followed by a new line and returns `1`.

* **5. Minimal Number of Coins for Change**
  * [100-change.c](./100-change.c): C program that prints the minimum number of coins to
  make change for an amount of money.
    * Usage: `./change cents` where `cents` is the amount of cents needed to give back.
    * Change can use an unlimited number of coins of values 25, 10, 5, 2 and 1 cent.
    * If the number passed as the argument is negative, the program prints `0`
    followed by a new line.
    * If the number of arguments passed to the program is not exactly one,
    it prints `Error` followed by a new line and returns `1`.
