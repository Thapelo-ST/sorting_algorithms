#include "sort.h"

/**
 * insertion_sort_list - sorts a list one item at a time
 * @list: array to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *next;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			previous = current->prev;
			previous->next = current->next;

			if (current->next != NULL)
				current->next->prev = previous;

			current->prev = previous->prev;
			current->next = previous;
			previous->prev = current;

			if (current->prev == NULL)
				*list = current;
			else
				current->prev->next = current;

			print_list(*list);
		}

		current = next;
	}
}
