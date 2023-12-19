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
 * bubble_sort - Sorts an array with a bubble algorithm
 * @array: the array to be sorted
 * @size: the size of the array being sorted
 *
 * Return: null
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);

				print_array(array, size);

				swapped = false;
			}
		}
		len--;
	}
}
