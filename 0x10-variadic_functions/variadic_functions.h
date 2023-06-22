#ifndef HEADER_FILE
#define HEADER_FILE
/* libraries */
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/* Prototype */

/* Task #0 */
int sum_them_all(const unsigned int n, ...);

/* Task #1 && #2 */
void print_numbers(const char *separator, const unsigned int n, ...);

/* Task #2 */
void print_strings(const char *separator, const unsigned int n, ...);

/* Task #3 */
void print_all(const char * const format, ...);

/**
 * struct formatStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct formatStruct
{
	char *type;
	void (*printer)(va_list); /* a function pointer */
} formatStruct;

/* handle character printing */
void print_char(va_list args);
/* handle integer printing */
void print_int(va_list args);
/* handle float printing */
void print_float(va_list args);
/* handle string printing */
void print_str(va_list args);

#endif
