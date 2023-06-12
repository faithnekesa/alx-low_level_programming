#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-A function that reads a text file
 * @filename:The text file being read into STDIN
 * @letters:The numebr of letters being read
 * Return: The number of letters it read and printed
 * 0 if filename is NULL or if write fails or does not write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *readBuffer;
ssize_t inputFile;
ssize_t fileWrite;
ssize_t fileRead;

inputFile = open(filename, O_RDONLY);
if (inputFile == -1)
	return (0);
readBuffer = malloc(sizeof(char) * letters);
fileRead = read(inputFile, readBuffer, letters);
fileWrite = write(STDOUT_FILENO, readBuffer, fileRead);
free(readBuffer);
close(inputFile);
return (fileWrite);
}
