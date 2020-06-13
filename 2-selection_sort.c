#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: Array to sort
 * @size: array size
 * Return: vid
 */
void selection_sort(int *array, size_t size)
{
	size_t min, x, y;
	int aux;

	if (array == NULL || size < 2)
		return;
	for (x = 0; x < size - 1; x++)
	{
		min = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[min] > array[y])
				min = y;
		}
		if (x != min)
		{
			aux = array[min];
			array[min] = array[x];
			array[x] = aux;
			print_array(array, size);
		}
	}
}
