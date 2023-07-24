#include "sort.h"

/**
 * lomuto_partition - performs the lomuto parrtition scheme
 * @array: array for partition
 * @low: starting index "
 * @high: final index
 * Return: final position of pivot after partitioning
 */

int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			printf("%d with %d\n", array[i], array[j]);
			print_array(array, high + 1);
		}
	}
	swap(&array[i + 1], &array[high]);
	/*printf("%d with %d\n", array[high], array[i + 1]);*/
	print_array(array, high + 1);
	return (i + 1);
}

/**
 * quick_sort_helper - recursive function for quick sort
 * @array: ...
 * @low: ...
 * @high: ...
 */

void quick_sort_helper(int *array, int low, int high)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high);

		quick_sort_helper(array, low, pivot - 1);
		quick_sort_helper(array, pivot + 1, high);
	}
}

/**
 * quick_sort - sort array in accending order
 * @array: array to be sorted
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_helper(array, 0, size - 1);
}

/**
 * swap - swaps positions
 * @a: position
 * @b: position
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
