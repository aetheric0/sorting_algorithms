#include "sort.h"

/**
 * bubble_sort - Implements the bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of array
 **/

void bubble_sort(int *array, size_t size)
{
	unsigned long int i = 0, j = 0, holder = 0;

	if (size > 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					holder = array[j];
					array[j] = array[j + 1];
					array[j + 1] = holder;
					print_array(array, size);
				}
			}
		}
	}
}
