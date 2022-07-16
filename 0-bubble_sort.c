#include "sort.h"

/**
 * bubble_sort - Function to sort an array of integers in
 * using bubble sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: No return
 */
void bubble_sort(int *array, size_t size)
{
	int w, some, thing;
        size_t i;

	do {
		w = 0;
		for (i = 1; i < size; i++)
		{
			some = array[i];
			thing = array[i - 1];
			if (thing > some)
			{
				array[i] = thing;
				array[i - 1] = some;
				print_array(array, size);
				w = 1;
			}
		}
	} while(w != 0);
}
