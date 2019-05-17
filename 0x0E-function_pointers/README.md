# C - Function pointers

In this project, I learned about function pointers in C - what they hold,
where they point in virtual memory, and how to use them.

## Header Files :file_folder:

* [function_pointers.h](./function_pointers.h): Header file containing prototypes
for all functions written for programs 0-2 of the project.

| File                 | Prototype                                                            |
| -------------------- | -------------------------------------------------------------------- |
| `0-print_name.c`     | `void print_name(char *name, void (*f)(char *));`                    |
| `1-array_iterator.c` | `void array_iterator(int *array, size_t size, void (*action)(int));` |
| `2-int_index.c`      | `int int_index(int *array, int size, int (*cmp)(int));`              |

* [3-calc.h](./3-calc.h): Header file containing definitions and prototypes for all
types and function written for the program [3-main.c](./3-main.c).

| Type/File          | Definition/Prototypes                                        |
| ------------------ | ------------------------------------------------------------ |
| `struct op`        | <ul><li>`char *op`</li><li>`int (*f)(int a, int b)`</li><ul> |
| `typedef op_t`     | `struct op`                                                  |
| `3-op_functions.c` | <ul><li>`int op_add(int a, int b);`</li><li>`int op_sub(int a, int b);`</li><li>`int op_mul(int a, int b);`</li><li>`int op_div(int a, int b);`</li><li>`int op_mod(int a, int b);`</li></ul>                                            |
| `3-get_op_func.c`  | `int (*get_op_func(char *s))(int, int);`                     |

## Tasks :page_with_curl:

* **0. What's my name**
  * [0-print_name.c](./0-print_name.c): C function that prints a name.

* **1. If you spend too much time thinking about a thing, you'll never get it done**
  * [1-array_iterator.c](./1-array_iterator.c): C function that executes a function given
  as a parameter on each element of an array.

* **2. To hell with circumstances; I create opportunities**
  * [2-int_index.c](./2-int_index.c): C function that searches for an integer.
    * Returns the index of the first element for which the `cmp` function does not return `0`.
    * If no element is matched or `size` <= 0, the function returns `-1`.

* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
  * [3-op_functions.c](./3-op_functions.c): File containing the following five functions:
    * `op_add`: Returns the sum of `a` and `b`.
    * `op_sub`: Returns the difference of `a` and `b`.
    * `op_mul`: Returns the product of `a` and `b`.
    * `op_div`: Returns the division of `a` by `b`.
    * `op_mod`: Returns the remainder of the division of `a` by `b`.

  * [3-get_op_func.c](./3-get_op_func.c): C function that selects the correct function
  from `3-op_functions.c` to perform the operation asked by the user.
    * If the operator argument `s` does not match any of the five expected operators
    (`+`, `-`, `*`, `/`, `%`), the function returns `NULL`.

  * [3-main.c](./3-main.c): C program that performs simple mathematical operations.
    * Prints the result of the operation, followed by a new line.
    * Usage `./a.out num1 operator num2`
    * The program assumes `num1` and `num2` are integers that can be converted from string
    input to `int` using `atoi`.
    * The program assumes that the result of all operations can be stored in an `int`.
    * `operator` is one of either `+` (addition), `-` (subtraction), `*`
    (multiplication), `/` (division), or `%` (modulo).
    * If the number of arguments is incorrect, the program prints `Error` followed by a new
    line and exits with a status value of `98`.
    * If the `operator` is none of the above, the program prints `Error` followed by
    a new line and exits with a status value of `99`.
    * If the user tries to divide (`/` or `%`) by `0`, the program prints
    `Error` followed by a new line and exits with a status value of `100`.

* **4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker**
  * [100-main_opcodes.c](./100-main_opcodes.c): C program that prints the opcodes of its
  own main function, followed by a new line.
    * Usage: `./main number_of_bytes`
    * Opcodes are printed two-decimal long in hexadecimal, lowercase.
    * If the number of arguments is incorrect, the program prints `Error`
    followed by a new line and exits with a status value of `2`.
