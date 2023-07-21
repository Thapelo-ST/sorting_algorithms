#include "sort.h"

/**
 * quick_sort - ...
 * @array: ...
 * @size: ...
 */

void quick_sort(int *array, size_t size)
{
	int pivot = array[size - 1], i = -1, temp;
	size_t j;

	if (size < 2)
		return;

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			/*swap array i and j*/
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp
			print_array(array, size);
		}
	}

	/*swapping pivot*/
	temp = array[i + 1];
	array[i + 1] = array[size - 1];
	array[size - 1] = temp;

	print_array(array, size);
	/*sort left*/
	quick_sort(array, i + 1);
	/* sort right */
	quick_sort(array + i + 2, size - i - 2);
}
