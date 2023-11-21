#include "sort.h"

/**
 * swap_n - A func to swap two nodes in a doubly-linked list.
 * @h: A pointer to the head.
 * @np: A pointer to the first node.
 * @nn: The second node to swap.
 */
void swap_n(listint_t **h, listint_t **np, listint_t *nn)
{
	(*np)->next = nn->next;
	if (nn->next != NULL)
		nn->next->prev = *np;
	nn->prev = (*np)->prev;
	nn->next = *np;
	if ((*np)->prev != NULL)
		(*np)->prev->next = nn;
	else
		*h = nn;
	(*np)->prev = nn;
	*np = nn->prev;
}

/**
 * insertion_sort_list - A func to sort doubly linked list of
 * 			integers using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list.
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *itr, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (itr = (*list)->next; itr != NULL; itr = temp)
	{
		temp = itr->next;
		insert = itr->prev;
		while (insert != NULL && itr->n < insert->n)
		{
			swap_n(list, &insert, itr);
			print_list((const listint_t *)*list);
		}
	}
}
