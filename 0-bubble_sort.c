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
 * bubble_sort - A func to sort array of integers in ascending order.
 * @array: An array of integers to be sorted.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool x = false;

	if (array == NULL || size < 2)
		return;

	while (x == false)
	{
		x = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_i(array + i, array + i + 1);
				print_array(array, size);
				x = false;
			}
		}
		len--;
	}
}
