#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Read an inputted text file nd
 * prints contents to stdo
 * @filename: Name of file to read
 * @letters: The num of chars to read
 * Return: Num of chars read, 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int workFile, printedLetters, readLetters, closed;
	char *buffer;

	workFile = printedLetters = readLetters = 0;
	buffer = malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		return (0);
	}

	workFile = open(filename, O_RDONLY);

	if (workFile == -1)
	{
		return (0);
	}

	readLetters = read(workFile, buffer, letters);

	if (readLetters == -1)
	{
		return (0);
	}

	printedLetters = write(STDOUT_FILENO, buffer, readLetters);

	if (printedLetters == -1)
	{
		return (0);
	}

	closed = close(workFile);

	if (closed == -1)
	{
		return (0);
	}

	free(buffer);
	return (readLetters);

}
