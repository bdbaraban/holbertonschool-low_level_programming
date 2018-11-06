# C - File I/O

In this project, I learned about the three standard file descriptors and their `POSIX` names as well as the difference between function and system calls. I practiced using the I/O system calls `open`, `close`, `read`, and `write` and the flags `O_RDONLY`, `WR_ONLY`, and `O_RDWR` to create, open, close, read, write, set permissions of files in C.

## Helper File

* `holberton.h`: Header file containing prototypes for all functions written in the project.

| File                | Prototype                                                      |
| ------------------- | -------------------------------------------------------------- |
| `0-read_textfile.c` | `ssize_t read_textfile(const char *filename, size_t letters);` |
|

## Tasks
* **Tread lightly, she is near**
  * `0-read_textfile.c`: C function that reads a text file and prints it to the `POSIX` standard output.
  * The parameter `letters` is the number of letters the function should read and print.
  * If the file is `NULL` or cannot be opened or read - returns `0`.
  * If the `write` call fails or does not write the expected number of bytes - returns `0`.
  * Otherwise - returns the actual number of bytes the function can read and print.

