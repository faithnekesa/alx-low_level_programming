#include "main.h"

/**
 * create_file -A function that creates a text file
 * @filename:This is a pointer to the file being created
 * @text_content:A pointer to the string being written to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fileWrite, strWrite, strLen = 0;
if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (strLen = 0; text_content[strLen];)
		strLen++;
	}
	fileWrite = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	strWrite = write(fileWrite, text_content, strLen);
	if (fileWrite == -1 || strWrite == -1)
		return (-1);
	close(fileWrite);
	return (1);
}
