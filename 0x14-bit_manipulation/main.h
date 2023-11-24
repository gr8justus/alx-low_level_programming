#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
void _putchar(char);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);

#endif
