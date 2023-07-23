#include "sort.h"

/**
 * swap_nodes - swap two nodes of doubly linked list
 *
 * @first: first node
 * @second: second node
 * Return: None
 */

void swap_nodes(listint_t *first, listint_t *second)
{
	first->next = second->next;
	if (second->next)
		second->next->prev = first;
	second->prev = first->prev;
	if (first->prev)
		first->prev->next = second;
	second->next = first;
	first->prev = second;
}

/**
 * insertion_sort_list - insertion sort algorithm
 *
 * @list: pointer to head of linked list array
 * Return: None
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *tmp = NULL;

	if (!list)
		return;
	if (curr)
		curr = curr->next;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			if (tmp->prev == *list)
				*list = tmp;
			swap_nodes(tmp->prev, tmp);
			print_list(*list);
		}
	}
}
