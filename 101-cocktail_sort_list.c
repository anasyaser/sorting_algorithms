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

/* /\** */
/*  * forward - helper function to cocktail */
/*  * */
/*  * @start: start node */
/*  * @end: end node */
/*  * Return: pointer to last node */
/*  *\/ */

/* listint_t *forward(listint_t *start, listint_t *end) */
/* { */
/* 	int end_status = 1; */
/* 	listint_t *curr; */

/* 	curr = start; */
/* 	while (end_status) */
/* 	{ */
/* 		if (!curr->next) */
/* 			break; */
/* 		if (curr->next == end) */
/* 			end_status = 0; */
/* 		if (curr->n > curr->next->n) */
/* 			swap_nodes(start->n, start->next->n); */
/* 		else */
/* 			start = start->next; */
/* 	} */
/* 	return (start); */
/* } */

/**
 * cocktail_sort_list - cocktail sort algorithm
 *
 * @list: pointer to head of linked list array
 * Return: None
 */

void cocktail_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	int direction = 1;
	listint_t *start_node = curr;
	listint_t *end_node = NULL;


	while (start_node != end_node)
	{
		if (direction)
		{
			if (curr->next == end_node)
			{
				direction = 0;
				end_node = curr;
			}
			if (curr->n > curr->next->n)
			{
				if (curr == *list)
					*list = curr->next;
				if (curr == start_node)
					start_node = curr->next;
				swap_nodes(curr, curr->next);
			} else
				curr = curr->next;
			
		} else
		{
			if (curr->prev == start_node)
			{
				direction = 1;
				start_node = curr;
			}
			if (curr->n < curr->prev->n)
			{
				if (curr->prev = *list)
					*list = curr;
			}

		}
	}
}
