#include "sort.h"

/**
 * bubble_sort - sorts array of integerss using bubble sort algorithm
 * @array: pointer to array of integers
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int x = 0, y = 0, tmp = 0;

	if (!array)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y + 1] < array[y])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}

