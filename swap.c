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
