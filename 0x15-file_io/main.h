#ifndef _FILE_H
#define _FILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>


#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_exit(int error_code, const char *mess);
int open_file(const char *filename, int flags, mode_t mode);
void close_file(int file_desc);
void copy_file(const char *file_from, const char *file_to);

#endif
