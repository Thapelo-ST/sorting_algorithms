#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts the array of intergers in accending order using bubble
 *               sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	/* declare variables*/
	int temp;
	size_t i, j;
	bool swapped = false;

	/* check if size and array are not empty*/
	if (array == 0 && size == 0)
		return;

	/* loop to enter the list/array */
	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		/*loop to compare*/
		for (j = 0; j < size - i - 1; j++)
		{
			/*swap if the the current number is bigger than the found number*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = true;
			}
		}
		/*print each time the outer loop completes */
		print_array(array, size);

		if (!swapped)
			break;
	}
}
