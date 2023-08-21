#include "lists.h"
#include <stdbool.h>
/**
 * is_palindrome - Entry point to check if this is a palindrome
 * @n: integer to be checked
 * Return: true if palindrome and false if not
 */


int is_palindrome(int value)
{
        int left_to_right = value; /* this duplicates the values givven */
        int right_to_left = 0; /* this stores the reverse values */
        int digit; /* to hold the last digit of the value */

        while (value > 0)
        {
                digit = value % 10;
                right_to_left = right_to_left * 10 + digit;
                value /= 10;
        } /* End while */
        if (left_to_right == right_to_left)
        {
                return (true);
        } /* end if */
        else
        {
                return (false);
        } /* End else */
} /* End function */
