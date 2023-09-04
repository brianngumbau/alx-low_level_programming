#include "main.h"

void check_IO(int st, int f, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on success else exit
 */
int main(int argc, char *argv[])
{
	int src, dest, rd = 1024, wrt, closed_src, closed_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO(src, -1, argv[1], 'o');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	check_IO(dest, -1, argv[2], 'W');
	while (rd == 1024)
	{
		rd = read(src, buffer, sizeof(buffer));
		if (rd == -1)
			check_IO(-1, -1, argv[1], 'o');
		wrt = write(dest, buffer, rd);
		if (wrt == -1)
			check_IO(-1, -1, argv[2], 'W');
	}
	closed_src = close(src);
	check_IO(closed_src, src, NULL, 'C');
	closed_dest = close(dest);
	check_IO(closed_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_IO - checks if a file can be opened or closed
 * @st: descriptor of file to be opened
 * @filename: name of file
 * @mode: closing or opening
 * @f: file descriptor
 * Return: empty
 */
void check_IO(int st, int f, char *filename, char mode)
{
	if (mode == 'C' && st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
	else if (mode == 'o' && st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write t0 %s\n", filename);
		exit(99);
	}
}

