#include "main.h"
/**
 * leet - encodes a string into 1337
 * @x: input value
 * Return: x value
 */
char *leet(char *x)
{
	int i, q;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (q = 0; q < 10; q++)
		{
			if (x[i] == s1[q])
			{
				x[i] = s2[q];
			}
		}
	}
	return (x);
}
