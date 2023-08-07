#include "main.h"

/**
 * create_file -Function that creates a text file
 * @filename:A pointer to the file being created
 * @text_content:A pointer to the string being written to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fileToWrite, stringWrite, strLen = 0;
if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (strLen = 0; text_content[strLen];)
		strLen++;
	}
	fileToWrite = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	stringWrite = write(fileToWrite, text_content, strLen);
	if (fileToWrite == -1 || stringWrite == -1)
		return (-1);
	close(fileToWrite);
	return (1);
}
