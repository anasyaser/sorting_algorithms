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

void insertion_sort_list(listint_t **list)
{
	listint_t *curr = *list;
	listint_t *tmp = NULL;
	int curr_val;

	while (curr && curr->next)
	{
		tmp = curr;
		while (curr->n < tmp->n)
			tmp = tmp->prev;
		if (curr->n > tmp->n)
			curr->prev->next = curr->next;

		curr = curr->next;
		insert_between(tmp, tmp->next, curr->prev);
	}
}
