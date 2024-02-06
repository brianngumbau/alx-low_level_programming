#include "search_algos.h"

/*
  * binary_search -  searches for a value in a sorted array of
  * integers using the Binary search algorithm
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value:  value to search for
  * Return: index of the value otherwise -1 if value is 
  * not present or the array is NULL
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
