#include "sort.h"

/**
 * swap_i - A function to swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_i(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - A func to sort an array of integers in ascending
 * order using the Selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *sml;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		sml = array + i;
		for (j = i + 1; j < size; j++)
			sml = (array[j] < *sml) ? (array + j) : sml;

		if ((array + i) != sml)
		{
			swap_i(array + i, sml);
			print_array(array, size);
		}
	}
}
