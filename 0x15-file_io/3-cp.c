#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *createBuffer(void);
void closeFile(int fileWrite);

/**
 * createBuffer -A function that allocates 1024 buffer bytes
 * Return:A pointer to the buffer
 */
char *createBuffer(void)
{
char *ioBuffer;
ioBuffer = malloc(sizeof(char) * 1024);

if (ioBuffer == NULL)
{
	exit(99);
}
return (ioBuffer);
}

/**
 * closeFile -A function that closes the file descriptors
 * @fileWrite:The file descriptor that's being closed
 */
void closeFile(int fileWrite)
{
int closeF = close(fileWrite);

if (closeF == -1)
{
/**	dprintf(STDERR_FILENO, "IO Error: Unable to close %d\n", fileWrite);**/
	exit(100);
}
}

/**
 * main -Entry point for function that copies file content of a file to another
 * @argc: The number of program arguments
 * @argv:Array pointers to program arguments
 * Return: 0 on success, return 97 if argument count is incorrect,
 * 98 if file doesnt exist,99 if dest file cannot be created or updated.
 * 100 if dest file cannot be closed
 */
int main(int argc, char *argv[])
{
int fromFile, toFile, readFile, writeFile;
char *ioBuffer;

if (argc != 3)
{
/**	dprintf(STDERR_FILENO, "cp file_from file_to\n");**/
	exit(97);
}
ioBuffer = createBuffer();
fromFile = open(argv[1], O_RDONLY);
readFile = read(fromFile, ioBuffer, 1024);
toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
	if (fromFile == -1 || readFile == -1)
	{
		free(ioBuffer);
		exit(98);
	}
	writeFile = write(toFile, ioBuffer, readFile);
	if (toFile == -1 || writeFile == -1)
	{
/**		dprintf(STDERR_FILENO,"IO Error: Unable to write to %s\n", argv[2]);**/
		free(ioBuffer);
		exit(99);
	}
	readFile = read(fromFile, ioBuffer, 1024);
	toFile = open(argv[2], O_WRONLY | O_APPEND);
	} while (readFile > 0);
	free(ioBuffer);
	closeFile(fromFile);
	closeFile(toFile);
	return (0);
}
