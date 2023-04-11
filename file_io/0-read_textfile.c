#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file where to read
 * @letters: numbers of letters to read an print with STDOUT_FILENO
 * Return: numbers of letters read and printed, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*my file descriptor*/
	int fd;
	char *buf;
	ssize_t chars_read, chars_write;

	if (filename == NULL)
		return (0);

	/*open the file and read only*/
	fd = open(filename, O_RDONLY);
	/*always check de error in open*/
	if (fd == -1)
		return (0);

	/*ask for memory to store filename content*/
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	/*read letters amount of chars from buffer*/
	chars_read = read(fd, buf, letters);
	/*if failed firts undo memory allocated and close de opened fd*/
	if (chars_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/*write the same amount of chars_read from buffer*/
	chars_write = write(STDOUT_FILENO, buf, chars_read);
	if (chars_write == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (chars_read);
}
