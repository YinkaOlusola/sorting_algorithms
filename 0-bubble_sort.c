#include "sort.h"

/**
 * swap_vals - Swaps two values in an arrray.
 * @a: The first value swap.
 * @b: The second value to swap.
 */
void swap_vals(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array by moving the lowest to the left.
 * @array The array to be sorted.
 * @size: size of the array to be sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_vals(array + i, array + i + 1);
				print_array(array, size);
				bubble = false
			}
		}
		len--;
	}
}
