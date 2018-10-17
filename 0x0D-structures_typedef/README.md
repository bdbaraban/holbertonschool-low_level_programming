In this project, I learned about using structures and `typedef` in C.

---

* `dog.h`: Header file containing definitions and prototypes for all types and functions written in the project.

| Type/File       | Defintion/Prototype                                                      |
| --------------- | ------------------------------------------------------------------------ |
| `struct dog`    | <ul><li>`char *name`</li><li>`float age`</li><li>`char *owner`</li></ul> |
| `typedef dog_t` | `struct dog`                                                             |
| `1-init_dog.c`  | `void init_dog(struct dog *d, char *name, float age, char *owner);`      |
| `2-print_dog.c` | `void print_dog(struct dog *d);`                                         |
| `4-new_dog.c`   | `dog_t *new_dog(char *name, float age, char *owner);`                    |
| `5-free_dog.c`  | `void free_dog(dog_t *d);`                                               |

---

* `1-init_dog.c`: C function that initializes a variable of type `struct dog`.
* `2-print_dog.c`: C function that prints a `struct dog`.
  * If an element of `d` is `NULL`, the function prints `(nil)` instead of the element.
  * If `d` is `NULL`, the function prints nothing.

* `4-new_dog.c`: C function that creates a dog.
  * Returns `NULL` if the function fails.

* `5-free_dog.c`: C function that frees dogs.
