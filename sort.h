#ifndef CALC_PROG
#define CALC_PROG

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
/* swap.c */
void swap(int *array, size_t i, size_t j);
/* bubble_sort.c */
void bubble_sort(int *array, size_t size);
/* insertion_sort_list.c */
void insert_between(listint_t *first, listint_t *second, listint_t *node);
void insertion_sort_list(listint_t **list);
/* selection_sort.c */
void selection_sort(int *array, size_t size);
/* quick_sort.c */
size_t partition(int *array, size_t low, size_t high);
void quick_sort(int *array, size_t size);
#endif
