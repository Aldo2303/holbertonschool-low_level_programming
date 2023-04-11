#include "main.h"
/**
 * create_file - Create a function that creates a file
 * @filename: file where to read
 * @text_content: pointer with content to string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, chars_write;

	if (filename == NULL)
		return (-1);

	/*man open, permission when create fd 00700 has read, write and exec*/
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);

	/*if textContent is NULL I need create an empty file*/
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/*write the textContent and len of string*/
	chars_write = write(fd, text_content, strlen(text_content));
	if (chars_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
