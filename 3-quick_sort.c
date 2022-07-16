#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers in
 * ascending order using the quick sort algorithm
 * @array:  the array of integers
 * @size: The size of the array of integers
 *
 * Return: No return
 */

void quick_sort(int *array, size_t size)
{
	size_t beg = 0;


	quicksort(array, beg, size);
}
