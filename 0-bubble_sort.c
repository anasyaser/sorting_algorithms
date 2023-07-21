#include "sort.h"

/**
 * bubble_sort - bubble sorting algorithm
 *
 * @array: pointer to array to sort
 * @size: array size
 * Return: None
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t num_swaps = 0;
	int tmp;

	while (1)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				num_swaps += 1;
			}
		}
		if (num_swaps == 0)
			break;
		num_swaps = 0;
	}
}
