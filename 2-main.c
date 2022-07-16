#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);
    int arraya[] = {54, 70, 13, 97, 2, 73, 20, 82, 33, 39, 45, 17, 79, 18, 60, 49, 48, 91, 95, 31};
    size_t m = sizeof(arraya) / sizeof(arraya[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    printf("\n");
    print_array(arraya, m);
    printf("\n");
    selection_sort(arraya, m);
    printf("\n");
    print_array(arraya, m);
    return (0);
}
