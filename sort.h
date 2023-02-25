#ifndef SORT_H_
#define SORT_H_

#include <stdio.h>
#include <stdlib.h>

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

/*print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* sorting function */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);
int partition(int *array, int start, int end, int size);
void quicksort_recursion(int *array, int start, int end, int size);
void prints(int *arr, char *side, size_t start, size_t end);
void rec_merge(int *array, int *sortArr, size_t l, size_t r);
void merge_sort(int *array, size_t size);
#endif
