#include "sort.h"

/**
* bubble_sort - sorts with bubble-sort algorithmn
*@array: array
*@size: size of array
*Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, newsize = 0;
	int temp = 0, swap;

	if (array == NULL || size < 2)
		return;

	newsize = size - 1;
	while (newsize)
	{
		swap = 0;
		for (i = 0; i < newsize; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
					swap = 1;
			}
		}
		newsize--;
		if (!swap)
			break;
	}
}
