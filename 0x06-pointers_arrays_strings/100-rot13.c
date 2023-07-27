#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes astring using rot13
 * @g: pointer to string params
 * Return: *g
 */
char *rot13(char *g)
{
	int k;
	int l;
	char data1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; g[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (g[k] == data1[l])
			{
				g[k] = datarot[k];
				break;
			}
		}
	}
	return (g);
}
