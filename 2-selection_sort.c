#include "sort.h"

/**
 * swap - swaps two integers
 * @a: the firts integer to swap
 * @b: the second interger to swap
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sorts array of int in ascending order using Selection sort
 * @array: an array to be sorted
 * @size: size of array
 *
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b, min_i;

	for (a = 0; a < size - 1; a++)
	{
		min_i = a;
		for (b = a + 1; b < size; b++)
			if (array[b] < array[min_i])
				min_i = b;
		if (min_i != a)
		{
			swap(&array[min_i], &array[a]);
			print_array(array, size);
		}
	}
}
