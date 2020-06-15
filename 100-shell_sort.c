#include "sort.h"
/**
 * shell_sort - sort array using shell sort algorithm
 * @array: array to sort
 * @size: array size
 * Return void
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 0, x, y;
	int aux;

	if (array == NULL || size < 2)
		return;

	while (gap <= size / 3)
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		x = gap;
		while (x < size)
		{
			y = x;
			while (y >= gap && array[y] < array[y - gap])
			{
				aux = array[y];
				array[y] = array[y - gap];
				array[y - gap] = aux;
				y -= gap;
			}
			x++;
		}
		gap /= 3;
		print_array(array, size);
	}
}
