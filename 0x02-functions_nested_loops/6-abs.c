#include "main.h"
#include <stdlib.h>



/**
 * _abs - Entry point
 * Description: 'check absolte value of integer'
 *
 * @r: number to be checked
 *
 * Return: Always 0
 */



int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);

	}

	return (0);

}
