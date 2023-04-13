#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *fileName);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes to buffer.
 * @file: The file name buffer is storing chars for.
 * Return: points to the newly-allocated buffer.
 */

char *create_buffer(char *fileName)
{
	char *theBuffer;

	theBuffer = malloc(sizeof(char) * 1024);

	if (theBuffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fileName);
		exit(99);
	}
	return (theBuffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int fileClose;

	fileClose = close(fd);

	if (fileClose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: The number of arguments
 * @argv: An array of pointers to arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit (97)
 *              If file_from does not exist or cannot be read - exit (98)
 *              If file_to cannot be created or written to - exit (99)
 *              If file_to or file_from cannot be closed - exit (100)
 */

int main(int argc, char *argv[])
{
	int openFrom, to, readFile, writeToFile;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	openFrom = open(argv[1], O_RDONLY);
	readFile = read(openFrom, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do
	{
		if (openFrom == -1 || readFile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		writeToFile = write(to, buffer, r);
		if (to == -1 || writeToFile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readFile = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (readFile > 0);
	free(buffer);
	close_file(openFrom);
	close_file(to);

	return (0);
}
