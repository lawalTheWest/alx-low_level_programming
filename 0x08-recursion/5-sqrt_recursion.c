#include "main.h"
#define bool int
#define false 0
#define true 1
#define ERROR -1

int find_sqrt(int num, int root);

/**
 * _sqrt_recursion - Entry point
 * @n: input from user
 * Return: True,
 * false and error
 */

int _sqrt_recursion(int n)
{
        int root = 0;

	/* handling negative numbers */
        if (n < 0)
	{
                return (ERROR);
	}  /* end if */
	else if (n == 0)
	{
		return (false);
	} /* end else if */
	else if (n == 1)
	{
                return (true);
	} /* end else if */
	else
	{
        return (find_sqrt(n, root));
	} /* end else */

}


/**
 * find_sqrt - Entry point
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: defined boolean
 */
int find_sqrt(int num, int root)

{
        if ((root * root) == num)
	{
                return (root);
	} /* end if */
        if (root == num / 2)
	{
                return (ERROR);
	}/* end if */

        return (find_sqrt(num, root + 1));

}
