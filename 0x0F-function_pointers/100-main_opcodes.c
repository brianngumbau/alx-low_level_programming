#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own function
 * @argc: argument count
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, index;
	int (*d)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (index = 0; index < b; index++)
	{
		opcode = *(unsigned char *)d;
		printf("%.2x", opcode);

		if (index == b - 1)
			continue;
		printf(" ");

		d;
	}
	printf("\n");
	return (0);
}
