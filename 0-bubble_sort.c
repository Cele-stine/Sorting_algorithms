#include "sort.h"

/**
 * swap_int - a function to swap integers.
 * @a: The first integer.
 * @b: the second integer.
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - a function that sorts an array on integers in asending
 * order using bubble sort.
 * @array: Thew array to sort.
 * @size: The size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
