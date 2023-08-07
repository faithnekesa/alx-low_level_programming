#include "main.h"

/**
 * append_text_to_file -Function that appends text to the end of a file
 * @filename:A pointer to the file being appended on
 * @text_content:A pointer to the string being appended to the file
 * Return: 1 on success and -1 on failure, 1 if if file exists
 * and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int outputFile, fileToWrite, Strlen = 0;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (Strlen = 0; text_content[Strlen];)
		Strlen++;
}
outputFile = open(filename, O_WRONLY | O_APPEND);
fileToWrite = write(outputFile, text_content, Strlen);
if (outputFile == -1 || fileToWrite == -1)
	return (-1);
close(outputFile);
return (1);
}
