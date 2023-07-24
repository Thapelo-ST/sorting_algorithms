#include "sort.h"

/**
 * selection_sort - ...
 * @array: array to be sorted
 * @size: size of an array
 */

void selection_sort(int *array, size_t size)
{
	int swapped;
	size_t temp, i, j, idx;

	for (i = 0; i < size; i++)
	{
		swapped = 0;
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx])
				idx = j;
			swapped = 1;
		}

		if (idx != i)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}

		if (!swapped)
			break;
	}
}
