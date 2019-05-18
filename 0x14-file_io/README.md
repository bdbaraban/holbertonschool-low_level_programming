# C - File I/O

In this project, I learned about the three standard file descriptors and their
`POSIX` names as well as the difference between function and system calls. I
practiced using the I/O system calls `open`, `close`, `read`, and `write`
and the flags `O_RDONLY`, `WR_ONLY`, and `O_RDWR` to create, open, close,
read, write, set permissions of files in C.

## Tests :heavy_check_mark:

* [tests](./tests): Folder of test files. Provided by Holberton School.

## Header File :file_folder:

* [holberton.h](./holberton.h): Header file containing prototypes for all functions
written in the project.

| File                      | Prototype                                                            |
| ------------------------- | -------------------------------------------------------------------- |
| `0-read_textfile.c`       | `ssize_t read_textfile(const char *filename, size_t letters);`       |
| `1-create_file.c`         | `int create_file(const char *filename, char *text_content);`         |
| `2-append_text_to_file.c` | `int append_text_to_file(const char *filename, char *text_content);` |

## Tasks :page_with_curl:

* **0. Tread lightly, she is near**
  * [0-read_textfile.c](./0-read_textfile.c): C function that reads a text file and
  prints it to the `POSIX` standard output.
  * The parameter `letters` is the number of letters the function should read and print.
  * If the file is `NULL` or cannot be opened or read - returns `0`.
  * If the `write` call fails or does not write the expected number of bytes - returns `0`.
  * Otherwise - returns the actual number of bytes the function can read and print.

* **1. Under the snow**
  * [1-create_file.c](./1-create_file.c): C function that creates a file.
  * The paramter `filename` is the name of the file to create.
  * The parameter `text_content` is a null-terminated string to write to the file.
  * If `text_content` is `NULL`, the function creates an empty file.
  * The created file has the permissions `rw-------`.
  * If the file already exists, the existing permissions are not changed.
  * Existing files are truncated.
  * If `filename` is `NULL` or the funciton fails - returns `-1`.
  * Otherwise - returns `1` on success.

* **2. Speak gently, she can hear**
  * [2-append_text_to_file.c](./2-append_text_to_file.c): C function that appends text at
  the end of a file.
  * The parameter `filename` is the name of the file.
  * The parameter `text_content` is a null-terminated string to append to the file.
  * The function does not create the file if it does not exist.
  * If `text_content` is `NULL`, nothing is added to the file.
  * If the function fails or `filename` is `NULL` - returns `-1`.
  * If the file does not exist or the user lacks write permissions on the file - returns `-1`.
  * Otherwise - returns `1`.

* **3. cp**
  * [3-cp.c](./3-cp.c): C program that copies the contents of a file to another file.
  * Usage: `cp file_from file_to`
  * If `file_to` already exists, it is truncated.
  * The created file has the permissions `rw-rw-r--`.
  * If the file already exists, the existing permissions are not changed.
  * If the number of arguments is incorrect, the function prints `Usage: cp file_from
  file_to`, followed by a new line on the `POSIX` standard error and exits with code `97`.
  * If `file_from` does not exist or the user lacks read permissions on it,
  the function prints `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new
  line and exits with code `98`.
    * Where `NAME_OF_THE_FILE` is the first argument passed to the program.
  * If files cannot be created or if `write` to `file_to` fails, the function prints
  `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line and exits with code `99`.
    * Where `NAME_OF_THE_FILE` is the second argument passed to the program.
  * If the user cannot close a file descriptor, the function prints `Error:
  Can't close fd FD_VALUE`, followed by a new line on the `POSIX` standard
  error and exits with code `100`.
    * Where `FD_VALUE` is the value of the file descriptor.

* **4. elf**
  * [100-elf_header.c](./100-elf_header.c): C program that displays the information contained
  in the `ELF` header at the start of an `ELF` file.
  * Usage `elf_header elf_filename`
  * Displayed information:
    * Magic
    * Class
    * Data
    * Version
    * OS/ABI
    * ABI Version
    * Type
    * Entry point address
  * Format is identical to `readelf -h` (version `2.26.1`).
  * If an error occurs or the file is not an `ELF` file, the function displays a
  corresponding error message to `stderr` and exits with a status value of `98`.
