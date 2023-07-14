#include <stdio.h>
/**
 * main - a program that prints lowercase alphabets except q and e
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar ('\n');
	return (0);
}

