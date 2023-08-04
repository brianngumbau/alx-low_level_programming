#include "main.h"
/**
 * _atoi - converts astring into an integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int g = 1, i = 0;
	unsigned int h = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			g *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '0'))
	{
		h = (h * 10) + (s[i] -'0');
		i++;
	}
	h *= g;
	return (h);
}
