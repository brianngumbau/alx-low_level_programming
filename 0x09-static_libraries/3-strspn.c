#include "main.h"
/**
 * _strspn -entryb point
 * @s: input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int d = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				d++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (d);
		}
		s++;
	}
	return (d);
}
