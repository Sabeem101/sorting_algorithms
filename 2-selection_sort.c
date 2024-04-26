#include "sort.h"

/**
 * arr_swap - swaps an array
 * @x: int
 * @y: int
 *
 * Return: void
 */
void arr_swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - sorts an array using selection sort algorithm.
 * @array: array
 * @size: array size
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int a, b, x;

	if (array == NULL || size < 2)
		return;
	for (a = 0; a < size; a++)
	{
		x = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[x] > array[b])
				x = b;
		}
		if (x != a)
		{
			arr_swap(&array[a], &array[x]);
			print_array(array, size);
		}
	}
}
