#include "sort.h"

/**
 * swap - swap to integers in array
 *
 * @array: pointer to array
 * @i: first index
 * @j: second index
 * @total_size: total size of array
 * Return: None
 */

void swap(int *array, int i, int j, size_t total_size)
{
	int tmp;

	if (i == j)
		return;
	tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
	print_array(array, total_size);
}

/**
 * partition - helper function (rearrange array to two partitions)
 *
 * @array: posize_ter to array
 * @low: lower index to re-partion part of array
 * @high: higher index to re-partition part of array
 * @total: total size of array
 * Return: None
 */

size_t partition(int *array, size_t low, size_t high, size_t total)
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
			swap(array, i, j, total);
		}

	}
	i++;
	swap(array, i, high, total);
	return (i);
}

/**
 * quick_helper - helper function for quick sort
 *
 * @array: pointer to array to sort
 * @low: low index of array
 * @high: high index of array
 * @total: total size of array
 * Return: None
 */

void quick_helper(int *array, size_t low, size_t high, size_t total)
{
	size_t pi; /* pivot index */

	if (low < high)
	{
		pi = partition(array, low, high, total);
		if (pi != 0)
			quick_helper(array, low, pi - 1, total);
		quick_helper(array, pi + 1, high, total);
	}

}

/**
 * quick_sort - quick sort algorithm (lumoto partition scheme)
 *
 * @array: posize_ter to unsorted array
 * @size: array size (number of size_teger)
 * Return: None
 */

void quick_sort(int *array, size_t size)
{
/* quick_sort(array, pi); */
/* quick_sort(array + pi + 1, size - pi - 1);*/
/* This code can be shorter, since it is array no need to recursive */
/* just use while loop */
	if (size > 1)
		quick_helper(array, 0, size - 1, size);
}

