#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *msg, const char *filename, int exit_code);
int open_file(const char *filename, int flags, mode_t mode);
void copy_file(int source_fd, int dest_fd);
void close_file(int fd);

#endif
