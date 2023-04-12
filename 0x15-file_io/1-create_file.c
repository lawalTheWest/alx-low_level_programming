#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a file with specified content and name
 * @filename: Name of the file to be created
 * @text_content: Content to read into the created file
 * Return: 1 on success, -1 on any failure
 */

int create_file(const char *filename, char *text_content)
{
	int myFile, lenT, fileClosed;
	mode_t mode = S_IRUSR | S_IWUSR;

	lenT = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	myFile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (myFile == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[lenT] != '\0')
		{
			lenT++;
		}
		write(myFile, text_content, lenT);
	}
	fileClosed = close(myFile);
	if (fileClosed == -1)
	{
		return (-1);
	}
	return (1);
}
