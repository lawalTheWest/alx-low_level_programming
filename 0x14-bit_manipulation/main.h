#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <unistd.h>

/*
 * Task #0
 * A function that converts a binary number
 * to an unsigned int
 */
unsigned int binary_to_uint(const char *b);

/*
 * Task #1
 * A function that prints
 * the binary representation of a number.
 */
void print_binary(unsigned long int n);

/*
 * Task #2
 * A function that returns the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index);

/*
 * Task #3
 * A function that sets the value of a bit to 1 at a given index
 */
int set_bit(unsigned long int *n, unsigned int index);

/*
 * Task #4
 * A function that sets the value of a bit
 *  to 0 at a given index.
 */
int clear_bit(unsigned long int *n, unsigned int index);


#endif
