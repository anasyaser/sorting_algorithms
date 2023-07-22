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
	listint_t *tmp_next = NULL;
	listint_t *tmp = NULL;
	int tmp_val;

	while (curr && curr->next)
	{
		tmp = curr->next;
		tmp_next = curr->next;
		tmp_val = tmp->n;
		while (tmp_val < tmp->prev->n)
			tmp = tmp->prev;
		if (curr->next != tmp)
		{
			tmp_next = tmp->next;
			insert_between(tmp, tmp->prev, curr->next);
			if (tmp_next)
				tmp_next->prev = curr;
			curr->next = tmp_next;
			print_list(*list);
		}
		curr = tmp_next;

	}
}
