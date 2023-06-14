#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **myarr;
	int i = 0;
	int j = 0;

	/* validate parameters */
	if (height <= 0 || width <= 0)
	{
		return (NULL);
	} /* end if */
	myarr = (int **) malloc(sizeof(int *) * height);
	if (myarr == NULL)
	{
		return (NULL);
	} /* end if */
	while (i < height)
	{
		myarr[i] = (int *) malloc(sizeof(int) * width);
		if (myarr[i] == NULL)
		{
			free(myarr);
			for (j = 0; j <= i; j++)
				free(myarr[j]);
			return (NULL);
		} /* end if */
		i++;
	} /* end while */

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			myarr[i][j] = 0;
		} /* end for */
	}
	return (myarr);
} /* end function */
