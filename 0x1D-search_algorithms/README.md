# C - Search Algorithms

This was my Holberton School project on search algorithms. I implemented
various types of search algorithms and stated the corresponding space/time
complexities for each.

## Helper Files

* [tests](./tests): Folder of test files for all tasks. Provided by Holberton
School.
* [search_algos.h](./search_algos.h): Header file containing definitions and
prototypes for all types and functions written for the project.

Data Structures
```
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |
| `100-jump.c`            | `int jump_search(int *array, size_t size, int value);`          |
| `102-interpolation.c`   | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`     | `int exponential_search(int *array, size_t size, int value);`   |
| `104-advanced_binary.c` | `int advanced_binary(int *array, size_t size, int value);`      |

## Tasks

* **0. Linear search**
  * [0-linear.c](./0-linear.c): C function that searches for a value in an array
of integers using linear search.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the first index where `value` is located.

* **1. Binary search**
  * [1-binary.c](./1-binary.c): C function that searches for a value in a sorted
array of integers using binary search.
  * Assumes the array is sorted in ascending order and that the value to search
for is not repeated in the array.
  * If the value is not present or the array is `NULL`, returns `-1`.
	* Otherwise, returns the index where `value` is located.

* **2. Big O #0**
  * [2-O](./2-O): Text file containing the worst case time complexity of linear
search.

* **3. Big O #1**
  * [3-O](./3-O): Text file containing the worst case space complexity of
iterative linear search.

* **4. Big O #2**
  * [4-O](./4-O): Text file containing worst case case time complexity
of binary search.

* **5. Big O #3**
  * [5-O](./5-O): Text file containing the worst case space complexity
of binary search.

* **6. Big O #4**
  * [6-O](./6-O): Text file containing the space complexity of the following algorithm:
```
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}
```

* **7. Jump search**
  * [100-jump.c](./100-jump.c)
* Write a function that searches for a value in a sorted array of integers using the Jump search algorithm

* **8. Big O #5**
  * [101-O](./101-O)
* What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

* **9. Interpolation search**
  * [102-interpolation.c](./102-interpolation.c)
* Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm

* **10. Exponential search**
  * [103-exponential.c](./103-exponential.c)
* Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm

* **11. Advanced binary search**
  * [104-advanced_binary.c](./104-advanced_binary.c)
* You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array).
In this exercise, you’ll have to solve this problem.

* **12. Jump search in a singly linked list**
  * [105-jump_list.c](./105-jump_list.c)
* You might think that linear search is not as effective as any other algorithm, right? Well, we should see what happens with a singly linked list.

* **13. Linear search in a skip list**
  * [106-linear_skip.c](./106-linear_skip.c)
  * As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list.
A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it.
A linked list with an express lane is called a skip list.
This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below).

* **14. Big O #6**
  * [107-O](./107-O)
  * What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

* **15. Big O #7**
  * [108-O](./108-O)
  * What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
