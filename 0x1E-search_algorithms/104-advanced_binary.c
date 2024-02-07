#include "search_algos.h"

/**
 * advanced_binary_rec - searches for a value in an array of
 * integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value
 */
int advanced_binary_rec(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t a;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (a = 0; a < size; a++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (advanced_binary_rec(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (advanced_binary_rec(array, half + 1, value));

	half++;
	return (advanced_binary_rec(array + half, size - half, value) + half);
}

/**
 * advanced_binary - calls out advanced_binary_rec to return
 * index of the number
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value else -1 if value is not present in
 * array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = advanced_binary_rec(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
