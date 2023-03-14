#include "main.h"
#include <stdlib.h>
/**
<<<<<<< HEAD
 *  * _strdup - returns a pointer to a newly allocated space in memory.
 *   * @str: string.
 *    * Return: pointer of an array of chars
 *     */
char *_strdup(char *str)
{
		char *strout;
			unsigned int i, j;

				if (str == NULL)
							return (NULL);
					for (i = 0; str[i] != '\0'; i++)
								;
						strout = (char *)malloc(sizeof(char) * (i + 1));
							if (strout == NULL)
										return (NULL);
								for (j = 0; j <= i; j++)
											strout[j] = str[j];
									return (strout);
=======
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strout[j] = str[j];
	return (strout);
>>>>>>> 19d73b78dd91ac4b242e96e5cd3f8e4b218e9ce6
}
