#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 * otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	int b;

	if (array == NULL)
		return (-1);

	for (b = 0; b < (int)size; b++)
	{
		printf("Value checked array[%u] = [%d]\n", b, array[b]);
		if (value == array[b])
			return (b);
	}
	return (-1);
}
