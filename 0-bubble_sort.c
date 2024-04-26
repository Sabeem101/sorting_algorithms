#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *			using the bubble sort algorithm.
 * @array: array to sort.
 * @size: array size.
 *
 * Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int temp = 0;

	if (!array || size <= 1)
		return;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < (size - x - 1); y++)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
