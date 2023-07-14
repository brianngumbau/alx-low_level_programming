#include <stdio.h>
/**
 * main - a program that prints all numbers of base 16 in lowercase
 * Return:0 (success)
 */
int main(void)
{
	int h;
	char j;

	for (h = 0; h < 10 ; h++)
		putchar(h + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
