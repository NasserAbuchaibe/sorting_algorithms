#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: array of integer to sort
 * @size: array size
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int aux, flag_l, flag = 1;
	size_t x;

	if (array == NULL || size < 2)
		return;
	while (flag)
	{
		flag_l = 0;
		for (x = 0; x < size; ++x)
		{
			if (array[x + 1] != '\0' && array[x] > array[x + 1])
			{
				flag_l = 1;
				aux = array[x];
				array[x] = array[x + 1];
				array[x + 1] = aux;
				print_array(array, size);
			}
		}
		if (flag_l == 0)
			flag = 0;
	}
}
