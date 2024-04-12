#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(const int *array, size_t size);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_printed(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t left, size_t right, int value);

#endif /* SEARCH_ALGOS_H */
