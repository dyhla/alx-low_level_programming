#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- will print the STDOUT.
 * @filename: this is the text file name to be read
 * @letters: the number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fid;
	ssize_t wide;
	ssize_t tight;

	fid = open(filename, O_RDONLY);
	if (fid == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tight = read(fid, buffer, letters);
	wide = write(STDOUT_FILENO, buffer, tight);

	free(buffer);
	close(fid);
	return (wide);
}
