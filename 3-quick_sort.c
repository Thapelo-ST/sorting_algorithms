#include "sort.h"

/**
 * lomuto_partition - performs the lomuto parrtition scheme
 * @array: array for partition
 * @low: starting index "
 * @high: final index
 * @size: size of array
 * Return: final position of pivot after partitioning
 */

int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	print_array(array, size);
	return (i + 1);
}

/**
 * quick_sort_helper - recursive function for quick sort
 * @array: ...
 * @low: ...
 * @high: ...
 * @size: ...
 */

void quick_sort_helper(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot = lomuto_partition(array, low, high, size);

		quick_sort_helper(array, low, pivot - 1, size);
		quick_sort_helper(array, pivot + 1, high, size);
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

	quick_sort_helper(array, 0, size - 1, size);
}
