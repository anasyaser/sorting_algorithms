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
	size_t j;
	int swaps = 0;
	int tmp;

	if (size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		swaps = 0;
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swaps = 1;
			}
		}
		if (swaps == 0)
			break;
	}
}
