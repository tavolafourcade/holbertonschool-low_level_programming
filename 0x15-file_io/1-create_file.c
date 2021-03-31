#include "holberton.h"
/**
 * create_file - function to create a file
 * @filename: file
 * @text_content: number of letters of the file
 * Return: numbers of letters or zero it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int size = 0;
	int  writ;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[size])
	{
		size++;
	}
	writ = write(fd, text_content, size);
	if (writ == -1)
		return (-1);

	close(fd);
	return (1);
}
