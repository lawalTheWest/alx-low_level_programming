#ifndef HEADER_FILE
#define HEADER_FILE

/*
 * prototype of a custom putchar function
 * for all the necessary printing
 */
int _putchar(char c);

/*
 * prototype of a function that prints a string,
 * followed by a new line.
 * task #0
 */
void _puts_recursion(char *s);

/*
 * prototype of a function that prints a string in reverse
 * task #1
 */
void _print_rev_recursion(char *s);

/*
 * prototype of a function that returns the length of a string.
 * task #2
 */
int _strlen_recursion(char *s);

/*
 * Prototype of a function 
 * that returns the factorial 
 * of a given number
 * task #3
 */
int factorial(int n);


/*
 * Prototype of a function
 * that returns the value
 * of a x raised to the power of y
 * task #4
 */
int _pow_recursion(int x, int y);

/* #5 */
int _sqrt_recursion(int n);
int find_sqrt(int num, int root);

/* Task #6 */
int check_prime(int n, int divisor);
int is_prime_number(int n);

/* Task #7 */
int _strlen(char s);
int _palindrome_truthfullness(char *s, int lenght, int counter);
int is_palindrome(char *s);

#endif
