#ifndef HEADER_FILE
#define HEADER_FILE

/* For standard io and library functions*/
#include <stdio.h>
#include <stdlib.h>

/* For sytem calls */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Function prototypes used */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
