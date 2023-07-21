#include "sort.h"

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

	/* check if size and array are not empty*/
	if (array == 0 && size == 0)
		return;

	/* loop to enter the list/ array */
	for (i = 0; i < size - 1; i++)
	{
		/*loop to compare*/
		for (j = 0; j < size - i; j++)
		{
			/*swap if the the current number is bigger than the found number*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		/*print each time the outer loop completes */
		print_array(array, size);
	}
}
