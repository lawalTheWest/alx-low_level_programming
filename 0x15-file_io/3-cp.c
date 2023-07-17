#include "main.h"

/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: An array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int open_from;
	int to;
	int read_file;
	int write_to_File;
	char *buffer;

	/* if the number of argument is not the correct one, exit with code 97 */
	if (!(argc == 3))
	{
		dprintf(STDERR_FILENO,
			"Usage: cp file_from file_to\n");
		exit(97);
	} /* end if */

	buffer = create_buffer(argv[2]);
	open_from = open(argv[1], O_RDONLY);
	read_file = read(open_from, buffer, 1024);
	/* if file_to already exists, truncate it */
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);

	do {
		/* validate parameters */
		if (open_from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		} /* end if */
		write_to_file = write(to, buffer, read_file);
		if (to == -1 || write_to_file == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		} /* end if */
		read_file = read(open_from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_file > 0); /* end do...while */
	free(buffer);
	close_file(open_from);
	close_file(to);

	return (0);
} /* End function */

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int file_close;

	file_close = close(fd);

	if (file_close == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	} /* end if */
} /* END FUNCTION */

/**
 * create_buffer - Allocates 1024 bytes to buffer.
 * @fileName: The file name buffer is storing chars for.
 * Return: points to the newly-allocated buffer.
 */
char *create_buffer(char *fileName)
{
	char *the_buffer;

	the_buffer = malloc(sizeof(char) * 1024);

	if (the_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fileName);
		exit(99);
	} /* end if */
	return (the_buffer);
} /* END FUNCTION */
