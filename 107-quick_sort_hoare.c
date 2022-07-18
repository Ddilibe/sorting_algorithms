#include "sort.h"


/**
 * quick_sort_hoare - Function that sorts an array of integers
 * in ascending order using quick sort algorithm
 * @array: An array of integers
 * @ size: Size of the array of integers
 *
 * Return: No return
 */

void quick_sort_hoare(int *array, size_t size)
{
	int a, b;
	size_t w, x;

	for(w = 0; w <size; w++)
	{
		a = array[w];
		for(x = w+1; x < size; x++)
		{
			b = array[x];
			if (a > b)
			{
				array[w] = b;
				array[x] = a;
				a = array[w];
			}
		}
		print_array(array, size);
	}
}
