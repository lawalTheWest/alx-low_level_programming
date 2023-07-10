#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


/* task #0 */
ssize_t read_textfile(const char *filename, size_t letters);

/* task #1 */
int create_file(const char *filename, char *text_content);

/* task #2 */
int append_text_to_file(const char *filename, char *text_content);

#endif
