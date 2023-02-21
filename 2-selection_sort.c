#include "sort.h"

/**
 *selection_sort - sorts using selection sort algorithmn
 *@array: array to sort
 *@size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_pos = 0;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
			{
				min_pos = j;
			}
		}
		if (min_pos != i)
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;
			print_array(array, size);
		}
	}
}
