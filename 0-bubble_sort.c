#include "sort.h"
/**
 * bubble_sort - Implements the bubble sort algorithm
 *
 * @array: array of integers to sort
 * @size: size of the array to sort
 *
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t step;
	size_t temp;

	for (step = 0; step < size - 1; ++step)
	{
		for (i = 0; i < size - step - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
