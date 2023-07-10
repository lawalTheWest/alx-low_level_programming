#include "main.h"
/**
 * create_file - entry point
 * @filename: Name of the file to be created
 * @text_content: Content to read into the created file
 * Return: 1 on success, -1 on any failure
 */
int create_file(const char *filename, char *text_content)
{
	int the_file; /* the file  */
	int txt_len; /* lenght of text content */
	int closed_value; /* return value */

	mode_t mode = S_IRUSR | S_IWUSR; /* the mode variable mode */

	txt_len = 0;
	if (filename == NULL)
	{
		return (-1);
	} /* end if  */

	/* File creation  */
	the_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (the_file == -1)
	{
		return (-1);
	} /* end if */

	/* write to file */
	if (text_content != NULL)
	{
		while (text_content[txt_len] != '\0')
		{
			txt_len++;
		} /* end while */
		write(the_file, text_content, txt_len);
	} /* end if */

	/* closing file */
	closed_value = close(the_file);
	if (closed_value == -1)
	{
		return (-1);
	} /* end if */
	return (1);
} /* end function */
