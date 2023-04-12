#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Open a file and add text to the end of the file
 * @filename: File to open nd append to
 * @text_content: Text to add to file
 * Return: 1 on success, -1 on failures
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int myFile, lenT, fileWrote;

	lenT = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	myFile = open(filename, O_WRONLY | O_APPEND);
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

		fileWrote = write(myFile, text_content, lenT);
		if (fileWrote == -1)
		{
			return (-1);
		}
	}

	close(myFile);
	return (1);
}
