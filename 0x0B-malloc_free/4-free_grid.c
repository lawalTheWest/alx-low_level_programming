#include <stdlib.h>
#include "main.h"
#define bool void
/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i; /* counter */

	/* validate parameters */
	if (grid == NULL || height == 0)
	{
		return;
	} /* end if */

	free(grid);
} /* end function */
