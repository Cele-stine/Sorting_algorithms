#include "sort.h"

/**
 * swap_selection - swaps the elements to their correct position.
 * @i: first element.
 * @j: second element.
 * Return: Nothing.
 */

void swap_selection(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}
/**
 * selection_sort - a function that sorts an array using selection
 * sort algorithm.
 * @array: the arrat to sort.
 * @size: the size of the array.
 * Return: Nothing.
 */

void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int *arr;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		arr = array + a;
		for (b = a + 1; b < size; b++)
			if (array[b] < *arr)
				arr = array + b;

		if ((array + a) != arr)
		{
			swap_selection(array + a, arr);
			print_array(array, size);
		}
	}
}
