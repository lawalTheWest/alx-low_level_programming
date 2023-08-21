#include "lists.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int result = find_largest_palindrome(3);
	FILE *file = fopen("102-result", "w+");

	if (file != NULL)
	{
		fprintf(file, "%d", result);
		fclose(file);
		printf("Result saved to 102-result file.\n");
	} /* end if */
	else
	{
		printf("Error opening file.\n");
	} /* end else */

    return 0;
} /* End Function */
