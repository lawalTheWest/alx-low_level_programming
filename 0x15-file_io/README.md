<h1> File I/0 </h1>
<h3> Lawal Tajudeen </h3>

`File I/O` refers to the `input and output` operations performed on `files`.
It allows you to `read data from files` (input) or `write data to files` (output), <b>enabling you to store and retrieve information persistently.</b>

To perform `file I/O`, we need to use the `stdio.h` header file, <em>this provides functions and macros for file handling</em>.
Here are the basic steps involved in file I/O operations:

1. `Opening a File:`
	- To open a file for reading or writing, you use the `fopen()` function. <em>It takes two arguments: the file path/name and the mode</em> (e.g., "r" for reading, "w" for writing).
	- Example (read): `FILE *file = fopen("filename.txt", "r");`
	- Example (write): `FILE *file = fopen("filename.txt", "w");`

2. Reading from a File:
	- Use functions like `fscanf()` or `fgets()` to read data from the file.
	- Example using `fscanf()`: `fscanf(file, "%s", buffer);` (don't forget to declare a buffer e.g. `char buffer[1024]`)

3. Writing to a File:
	- Use functions like `fprintf()` or `fputs()` to write data to the file.
	- Example using `fprintf()`: `fprintf(file, "Hello, World!");`

4. Closing a File:
	- Always close the file after you're done with it using the `fclose()` function.
	- Example: `fclose(file);`

<p>
Here's a complete example that demonstrates reading and writing to a file:
</p>

```
#include <stdio.h>

/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
	FILE *file;
	char buffer[100];

	/* Open file for writing */
	file = fopen("filename.txt", "w");
    	if (file == NULL)
	{
        	printf("Error opening the file.\n");
        	return 1;
    	} /* end if */

	/* Write data to the file */
	fprintf(file, "Hello, World!");

	/* Close the file */
	fclose(file);

	/* Open file for reading */
	file = fopen("filename.txt", "r");
	if (file == NULL)
	{
        	printf("Error opening the file.\n");
        	return 1;
    	} /* end if */

    	/* Read data from the file */
    	fscanf(file, "%s", buffer);
    	printf("Data read from file: %s\n", buffer);

    	/* Close the file */
	fclose(file);

    	return 0;
} /* end function */
```

This example opens a file named "filename.txt", writes the text "Hello, World!" to it, reads the content back, and prints it to the console.

Remember to handle error conditions, such as checking if the file was successfully opened or closed, to ensure proper file I/O operations.


<h6> ALX SE </h6>
