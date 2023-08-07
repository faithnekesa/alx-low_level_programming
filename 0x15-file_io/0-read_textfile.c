#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-Function that reads a text file
 * @filename:Text file being read into STDIN
 * @letters: Number of letters being read
 * Return:Num of letters read and printed
 * 0 if filename is NULL, if write fails or does not write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *rdBuffer;
ssize_t inputFile;
ssize_t fileToWrite;
ssize_t fileToRead;

inputFile = open(filename, O_RDONLY);
if (inputFile == -1)
	return (0);
rdBuffer = malloc(sizeof(char) * letters);
fileToRead = read(inputFile, rdBuffer, letters);
fileToWrite = write(STDOUT_FILENO, rdBuffer, fileToRead);
free(rdBuffer);
close(inputFile);
return (fileToWrite);
}
