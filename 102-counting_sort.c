#include "sort.h"

/**
 * counting_sort - counting sort algorithm
 *
 * @array: pointer to array to sort
 * @size: array size
 * Return: None
 */

void counting_sort(int *array, size_t size)
{
	int max_num = 0;
	int *count_arr;
	int *output;
	size_t i = 0;

	if (size < 2)
		return;
	while (i < size)
	{
		if (array[i] > max_num)
			max_num = array[i];
		i++;
	}

	count_arr = malloc((max_num + 1) * sizeof(int));
	if (count_arr == NULL)
		return;

	output = malloc(size * sizeof(int));
	if (output == NULL)
	{
		free(count_arr);
		return;
	}

	for (i = 0; i < size; i++)
		count_arr[array[i]] += 1;
	for (i = 1; i < (size_t)(max_num + 1); i++)
		count_arr[i] += count_arr[i - 1];
	print_array(count_arr, max_num + 1);

	for (i = 0; i < size; i++)
	{
		count_arr[array[i]] -= 1;
		output[count_arr[array[i]]] = array[i];
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(count_arr);
	free(output);
}
