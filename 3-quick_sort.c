#include "sort.h"

/**
 *swap - swaps the two values at different indexes
 *@x: pointer to first value
 *@y: pointer to the second
 */

void swap(int *x, int *y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 *partition- partition the array
 *@array: the array
 *@start: start of the array
 *@end: end index of the array (size - 1)
 *@size: fill size of the array
 *Return: the position of the pivot
 */

int partition(int *array, int start, int end, int size)
{
	int pivot = array[end];
	int i = start, j;

	for (j = start; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != end)
	{
		swap(&array[i], &array[end]);
		print_array(array, size);
	}
	return (i);
}

/**
 *quicksort_recursion - sorts with recursion
 *@array: the array to sort
 *@start: the start index of the array
 *@end: the end index of the array
 *@size: the fullsize of the array
 */

void quicksort_recursion(int *array, int start, int end, int size)
{
	int pivot = 0;

	if (start < end)
	{
		pivot = partition(array, start, end, size);
		quicksort_recursion(array, start, pivot - 1, size);
		quicksort_recursion(array, pivot + 1, end, size);
	}
}

/**
 *quick_sort- quick sort an array
 *@array: the array
 *@size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_recursion(array, 0, size - 1, size);
}
