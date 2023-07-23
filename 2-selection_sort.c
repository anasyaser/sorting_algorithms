#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 *
 * @array: pointer to array to sort
 * @size: array size
 * Return: None
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t o;
	int tmp;
	int min_idx;

	for (o = 0; o < size - 1; o++)
	{
		min_idx = o;
		for (i = o + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;

			if (min_idx != o)
			{
				tmp = array[o];
				array[o] = array[min_idx];
				array[min_idx] = tmp;
			}
		}
		print_array(array, size);
	}
}
