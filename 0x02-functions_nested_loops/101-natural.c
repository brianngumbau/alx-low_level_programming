#include <stdio.h>
/**
 * main - prints the sum of multiples of 3 or 5 below 1024
 * Return:0
 */

int main(void)
{
	int i, k = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			k += i;
		}
		i++;
	}
	printf("%d\n", k);
	return (0);
}
