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

	for (o = 0; o < size - 1; o++)
	{
		for (i = o + 1; i < size; i++)
		{
			if (array[i] < array[o])
			{
				tmp = array[o];
				array[o] = array[i];
				array[i] = tmp;
			}
		}
		print_array(array, size);
	}
}
