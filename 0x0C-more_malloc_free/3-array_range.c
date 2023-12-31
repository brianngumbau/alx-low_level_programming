#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: where values should start from
 * @max: maximum value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *x, y = 0;

	if (min > max)
		return (NULL);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[y] = min;
		y++;
		min++;
	}

	return (x);
}
