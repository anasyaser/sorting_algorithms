#include "sort.h"

/**
 * insert_between - insert node between two nodes
 *
 * @first: first Node
 * @second: second Node
 * @node: node to insert
 * Return: None
 */

void insert_between(listint_t *first, listint_t *second, listint_t *node)
{
	if (!node)
		return;
	if (first)
		first->next = node;
	if (second)
		second->prev = node;
	node->prev = first;
	node->next = second;
}

/**
 * insertion_sort_list - insertion sort algorithm
 *
 * @list: pointer to head of linked list array
 * Return: None
 */
/*
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *prev = NULL;
	listint_t *tmp = NULL;
	int curr_val;

	if (curr)
		curr = curr->next;

	while (curr)
	{
		tmp = curr;
		curr_val = curr->n;
		while (tmp->prev && curr_val < tmp->prev->n)
			tmp = tmp->prev;

		if (curr != tmp)
		{
			prev = curr->prev;
			prev->next = curr->next;
			insert_between(tmp->prev, tmp, curr);
			if (tmp == *list)
				*list = curr;
			curr = prev->next;
			if (curr)
				curr->prev = prev;
			print_list(*list);
		} else
			curr = curr->next;
	}
}
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *tmp = NULL;

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
			swap_nodes(tmp, tmp->prev);
			print_list(*list);
		}
	}
}
