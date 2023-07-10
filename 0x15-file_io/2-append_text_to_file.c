#include "main.h"
/**
 * append_text_to_file - Entry point
 * @filename: File to open nd append to
 * @text_content: Text to add to file
 * Return: 1 on success, -1 on failures
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int the_file, text_len, written_file;

	text_len = 0;
	/* validating parameters */
	if (filename == NULL)
	{
		return (-1);
	} /* end if */
	/* opening file */
	the_file = open(filename, O_WRONLY | O_APPEND);
	if (the_file == -1)
	{
		return (-1);
	} /* end if */
	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
		{
			text_len++;
		} /* end if */

		/* writting to file */
		written_file = write(the_file, text_content, text_len);
		if (written_file == -1)
		{
			return (-1);
		} /* end if */
	} /* end if */

	/* closing file */
	close(the_file);
	return (1);
} /* end function */
