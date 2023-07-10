#include "main.h"
/**
 * read_textfile - entry point
 * @filename: Name of file to be read
 * @letters: The num of chars to read from the file
 * Return: Num of chars read, & 0 on failure || empty
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int the_file = 0;
	int printed_letters = 0;
	int read_letters = 0;
	int closed;
	char *buffer;

	buffer = malloc(letters * sizeof(char)); /* buffer size */
	/* validating parameters */
	if (filename == NULL)
	{
		return (0);
	} /* end if */
	the_file = open(filename, O_RDONLY);
	if (the_file == -1)
	{
		return (0);
	} /* end if */
	read_letters = read(the_file, buffer, letters);
	if (read_letters == -1)
	{
		return (0);
	} /* end if */
	printed_letters = write(STDOUT_FILENO, buffer, read_letters);
	if (printed_letters == -1)
	{
		return (0);
	} /* end if */
	closed = close(the_file);
	if (closed == -1)
	{
		return (0);
	} /* end if */
	free(buffer);
	return (read_letters);
} /* end function */
