#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 71, 2, 203, 16, 17, 1, 7, 2, 4, 5, 10, 8, 11, 20, 13, 15, 14, 6, 9, 18, 12, 19};
    /*int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};*/
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
