#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t lengthr, lengthw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	lengthr = read(file, buffer, letters);
	close(file);
	if (lengthr == -1)
	{
		free(buffer);
		return (0);
	}
	lengthw = write(STDOUT_FILENO, buffer, lengthr);
	free(buffer);
	if (lengthr != lengthw)
		return (0);
	return (lengthw);
}
