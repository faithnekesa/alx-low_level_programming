#include "main.h"

/**
 * append_text_to_file -A function that appends text to the end of a file
 * @filename:This is a pointer to the file being appended
 * @text_content:A pointer to the string being appended to the file
 * Return: 1 on success and -1 on failure, 1 if if file exists
 * and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int outFile, fileWrite, Strlen = 0;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
	for (Strlen = 0; text_content[Strlen];)
		Strlen++;
}
outFile = open(filename, O_WRONLY | O_APPEND);
fileWrite = write(outFile, text_content, Strlen);
if (outFile == -1 || fileWrite == -1)
	return (-1);
close(outFile);
return (1);
}
