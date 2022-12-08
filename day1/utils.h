#ifndef __UTILS_H__
#define __UTILS_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <time.h>

#define BUFFER_SIZE 10
#define ARRAY_SIZE 3


void check_max(int temp_value, int calories[]);
void file_parser(const char *filename);
void print_func(int calories[]);

#endif