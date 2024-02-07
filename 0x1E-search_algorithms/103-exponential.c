#include "search_algos.h"

/**
  * binary_search -  searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: index of the value else -1 if vallue is not present
  * or if array is NULL
  */
int binary_search(int *array, size_t size, int value)
{
	size_t k, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (k = left; k < right; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		k = left + (right - left) / 2;
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			right = k - 1;
		else
			left = k + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  value to search for
 * Return: index of the value else -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t j = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (j = 1; j < size && array[i] <= value; j = j * 2)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	}

	right = j < size ? j : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", j / 2, right);
	return (_binary_search(array, j / 2, right, value));
}
