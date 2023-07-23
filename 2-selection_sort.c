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
	size_t j;
	int tmp;
	size_t min_idx;

	if (size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		min_idx = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min_idx])
				min_idx = i;
		}
		if (min_idx != j)
		{
			tmp = array[j];
			array[j] = array[min_idx];
			array[min_idx] = tmp;
			print_array(array, size);
		}
	}
}
