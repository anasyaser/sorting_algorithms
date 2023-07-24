#include "sort.h"

/**
 * swap_int - swap to integers in array
 *
 * @array: pointer to array
 * @i: first index
 * @j: second index
 * Return: None
 */

void swap_int(int *array, int i, int j)
{
	int tmp;

	if (i == j)
		return;
	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
 * shell_sort - shell sort algorithm
 *
 * @array: pointer to array to sort
 * @size: array size
 */

void shell_sort(int *array, size_t size)
{
	size_t gaps;
	size_t i;
	size_t j;

	gaps = 1;
	while (gaps  < size)
		gaps = gaps * 3 + 1;

	while ((gaps = (gaps - 1) / 3) >= 1)
	{
		for (i = gaps; i < size; i++)
		{
			j = i;
			while (j > gaps || j == gaps)
			{
				if (array[j] < array[j - gaps])
					swap_int(array, j - gaps, j);
				j -= gaps;
			}
		}
		print_array(array, size);
	}

}
