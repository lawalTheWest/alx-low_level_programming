<h1> 0x0C-more_malloc_free </h1>

Dynamic memory allocation is a fundamental concept in programming, and C provides two important functions:
- `malloc()` and
- `free()`,
to manage memory dynamically.
These functions are declared in the `<stdlib.h>` header file.

The `malloc()` function, short for <b>memory allocation,</b> is used to allocate a block of memory during program execution.
It takes as input the number of bytes to be allocated and returns a pointer to the beginning of the allocated memory block.
<em>The syntax for</em> `malloc()` <em>is as follows:</em>

```
void* malloc(size_t size);
```

To allocate memory for a specific data type, the `sizeof()` operator is typically used to determine the appropriate size in bytes.
eg. to allocate memory for an array of 100 integers:
```
int* taj = (int*)malloc(100 * sizeof(int));
```

The allocated memory block is contiguous and can be accessed using the returned pointer.
This dynamically allocated memory can be used to store data structures, arrays, strings, or any other objects required during program execution.

Once dynamically allocated memory is no longer needed, it should be freed to prevent memory leaks.
The `free()` function deallocates the memory block previously allocated using `malloc()`.
It takes a pointer to the memory block as input and releases the memory, making it available for reuse.
The syntax for `free()` is as follows:
```
/* the sample prototype function void free(void *ptr); */
void free(void* ptr);
```

To free the memory allocated for the `numbers` array:
```
free(taj);
```

It is crucial to note:
- `free()` can only be used to deallocate memory that was allocated using `malloc()`, `calloc()`, or `realloc()`.
- Passing an invalid or previously freed pointer to `free()` results in undefined behavior.

Proper management of dynamic memory is essential to prevent memory leaks and optimize resource usage.
Failing to free dynamically allocated memory can lead to `memory leaks`,
where memory is allocated but never released, causing the program to consume excessive memory over time.

By using `malloc()` and `free()`, C programs can dynamically allocate and deallocate memory, allowing efficient memory management and flexibility in handling variable-sized data structures or arrays.
However, it is essential to use these functions with caution, ensuring proper allocation and deallocation practices to maintain the stability and efficiency of the program.

<h6>ALX SE</h6>
