#include "sort.h"

/**
 * swap - swap to integers in array
 *
 * @array: pointer to array
 * @i: first index
 * @j: second index
 * Return: None
 */

void swap(int *array, size_t i, size_t j)
{
	int tmp;

	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

/**
 * partition - helper function (rearrange array to two partitions)
 *
 * @array: pointer to array
 * @low: lower index to re-partion part of array
 * @high: higher index to re-partition part of array
 * Return: None
 */

size_t partition(int *array, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i;
	size_t j;

	i = low - 1;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot || array[j] == pivot)
		{
			i++;
			swap(array, i, j);
		}
	}
	i++;
	swap(array, i, high);
	return (i);
}

/**
 * quick_sort - quick sort algorithm (lumoto partition scheme)
 *
 * @array: pointer to unsorted array
 * @size: array size (number of integer)
 * Return: None
 */

void quick_sort(int *array, size_t size)
{
	size_t pi;

	if (size > 1)
	{
		pi = partition(array, 0, size - 1);
		quick_sort(array, pi);
		print_array(array, size);
		quick_sort(array + pi + 1, size - pi - 1);
		print_array(array, size);
	}
}
