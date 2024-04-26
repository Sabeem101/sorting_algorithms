#include "sort.h"

/**
 * lpartition - creates a partition following the lomuto partition scheme.
 * @array: array to sort.
 * @lowest: lowest position.
 * @highest: highest position.
 * @size: array size.
 *
 * Return: position to perform recursion.
 */
int lpartition(int *array, int lowest, int highest, size_t size)
{
	int pivot, saves, x, y;

	pivot = array[highest];
	x = lowest - 1;
	for (y = lowest; y <= highest - 1; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			saves = array[x];
			array[x] = array[y];
			array[y] = saves;
			if (x != y)
				print_array(array, size);
		}
	}
	saves = array[x + 1];
	array[x + 1] = array[y];
	array[y] = saves;
	if (x + 1 != highest)
		print_array(array, size);
	return (x + 1);
}
/**
 * quicks - performs the recursion of the quick sort function.
 * @array: array to sort.
 * @L: lowest partition.
 * @H: highest partition.
 * @size: size of the array.
 *
 * Return: void.
 */
void quicks(int *array, int L, int H, size_t size)
{
	int pos;

	if (L < H)
	{
		pos = lpartition(array, L, H, size);
		quicks(array, L, pos - 1, size);
		quicks(array, pos + 1, H, size);
	}
}
/**
 * quick_sort - sorts an array by quick sort method.
 * @array: array to sort.
 * @size: array size.
 *
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicks(array, 0, (int)size - 1, size);
}
