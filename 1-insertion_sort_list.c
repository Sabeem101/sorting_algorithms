#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 *			in ascending order using the insertion sort algorithm.
 * @list: doubly linked list to sort.
 *
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *a = NULL, *b = NULL, *c = NULL, *d = NULL;
	listint_t *current = NULL;

	if (!list || !(*list) || lleng(*list) < 2)
		return;
	current = *list;
	while (current)
	{
		if (current->prev && current->n < current->prev->n)
		{
			a = current->prev->prev;
			b = current->prev;
			c = current;
			d = current->next;
			b->next = d;
			if (d)
				d->prev = b;
			c->next = b;
			c->prev = a;
			if (a)
				a->next = c;
			else
				*list = c;
			b->prev = c;
			current = *list;
			print_list(*list);
			continue;
		}
		else
			current = current->next;
	}
}

/**
 * lleng - returns the linked list length
 * @head: pointer to the head of the list.
 *
 * Return: list length
 */
int lleng(listint_t *head)
{
	int leng = 0;

	while (head)
	{
		leng++;
		head = head->next;
	}
	return (leng);
}
