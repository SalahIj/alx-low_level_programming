#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

void print_binary(unsigned long int n);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);

#endif
