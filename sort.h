#ifndef ALGORITHM
#define ALGORITHM

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print_array.c */
void print_array(const int *array, size_t size);
/* print_list.c */
void print_list(const listint_t *list);
/* bubble_sort.c */
void bubble_sort(int *array, size_t size);
/* insertion_sort_list.c */
void swap_nodes(listint_t *first, listint_t *second);
void insertion_sort_list(listint_t **list);
/* selection_sort.c */
void selection_sort(int *array, size_t size);
/* quick_sort.c */
void swap(int *array, int i, int j, size_t total_size);
size_t partition(int *array, size_t low, size_t high, size_t total);
void quick_sort(int *array, size_t size);
void quick_helper(int *array, size_t low, size_t high, size_t total);
/* shell_sort.c */
void swap_int(int *array, int i, int j);
void shell_sort(int *array, size_t size);
/* cocktail_sort_list.c */
void coctail_sort(listint_t **list);
/* counting_sort.c */
void counting_sort(int *array, size_t size);
#endif
