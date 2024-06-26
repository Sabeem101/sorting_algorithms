#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

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

/* helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Bubble sort */
void bubble_sort(int *array, size_t size);
/* Insertion sort */
void insertion_sort_list(listint_t **list);
int lleng(listint_t *head);
/* Selection sort */
void arr_swap(int *x, int *y);
void selection_sort(int *array, size_t size);
/* Quick sort */
int lpartition(int *array, int lowest, int highest, size_t size);
void quicks(int *array, int L, int H, size_t size);
void quick_sort(int *array, size_t size);

#endif
