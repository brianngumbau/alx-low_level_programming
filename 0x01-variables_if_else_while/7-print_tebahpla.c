#include <stdio.h>
/**
 * main - a program that prints lowercase alphabet in reverse
 * Return:0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
