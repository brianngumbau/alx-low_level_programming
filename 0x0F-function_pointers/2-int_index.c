#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function
 * Return: 0 or index of 1st element if cmp
 * does not return 0, -1 if no element matches,
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]))
			return (y);
	}
	return (-1);
}
