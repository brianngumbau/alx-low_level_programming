#include <stdio.h>
/**
 * main - main program
 * Return:0 (success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		if (!(i > j) || i == j)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		j++;
	}
	i++;
	return (0);
}
