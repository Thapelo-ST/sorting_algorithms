#ifndef SORT_H
#define SORT_H

/* needed file headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structures */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* function prototypes */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* quick sort function adders*/
void quick_sort_helper(int *array, int low, int high);
void swap(int *a, int *b);
int lomuto_partition(int *array, int low, int high);
#endif /* SORT_H */
