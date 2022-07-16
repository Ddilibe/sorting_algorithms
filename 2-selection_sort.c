#include "sort.h"


/**
 * selection_sort - Function that sorts an array of integers
 * in ascending order using the selection sort algorithm
 * @array: An array of integers
 * @size: Size of the array of integers
 *
 * Return: No return
 */

void selection_sort(int *array, size_t size)
{
	long unsigned int u, v, w, x, y, z, i;

	for(u = 0; u < size; u++)
	{
		i = 1;
		w = array[u];
		z = array[u];
		for(v = u + 1; v < size; v++)
		{
			x = array[v];
			if(z > x)
			{
				z = x;
				y = v;
				i = 0;
			}
		}
		if (i == 0) 
		{
			array[u] = z;
			array[y] = w;
			print_array(array, size);
		}
	}
}

