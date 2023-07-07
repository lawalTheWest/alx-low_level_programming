#include "main.h"

/**
 * print_binary - Entry point
 * Description: to a function that prints
 * the binary representation of a number.
 * @n: The num to be printed in binary form.
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin_num = 0;
	unsigned long int counter = 0;
	char c;

	/* Validating parameters */
	if (n == 0)
	{
		c = '0';
		write(1, &c, 1);
		/* _putchar('0'); */
	} /* End if */

	while (n > 0)
	{
		bin_num = bin_num << 1;
		bin_num += n & 1;
		counter++;
		n = n >> 1;
	} /* End while */

	while (bin_num > 0)
	{
		c = ((bin_num & 1) + '0');
		write(1, &c, 1);
		/* _putchar((bin_Num & 1) + 48); */
		bin_num = bin_num >> 1;
		counter--;
	} /* End while */

	if (counter > 0)
	{
		while (counter != 0)
		{
			c = '0';
			write(1, &c, 1);
			/* _putchar('0'); */
			counter--;
		} /* End while */
	} /* End if */
} /* End function */
