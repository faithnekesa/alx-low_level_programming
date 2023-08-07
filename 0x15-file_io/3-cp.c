#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *createBuffer(char *file);
void closeFile(int fileWrite);

/**
 * createBuffer -A function that allocates 1024 buffer bytes
 * @file:A pointer to the file buffer storing string chars
 * Return: Pointer to the buffer
 */
char *createBuffer(char *file)
{
char *inputBuffer;
inputBuffer = malloc(sizeof(char) * 1024);

if (inputBuffer == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
return (inputBuffer);
}

/**
 * closeFile -A function that closes file descriptors
 * @fileWrite:File descriptor that being closed
 */
void closeFile(int fileWrite)
{
int close_file = close(fileWrite);

if (close_file == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileWrite);
	exit(100);
}
}

/**
 * main -Function that copies file content of a file to another
 * @argc: Number of program args
 * @argv:Array pointers to program args
 * Return: 0 on success, 97 if argument count is incorrect,
 * 98 if file doesnt exist,99 if dest file cannot be created or updated.
 * 100 if dest file cannot be closed
 */
int main(int argc, char *argv[])
{
int fromFile, toFile, readFile, writeFile;
char *inputBuffer;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
inputBuffer = createBuffer(argv[2]);
fromFile = open(argv[1], O_RDONLY);
readFile = read(fromFile, inputBuffer, 1024);
toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
	if (fromFile == -1 || readFile == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(inputBuffer);
		exit(98);
	}
	writeFile = write(toFile, inputBuffer, readFile);
	if (toFile == -1 || writeFile == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(inputBuffer);
		exit(99);
	}
	readFile = read(fromFile, inputBuffer, 1024);
	toFile = open(argv[2], O_WRONLY | O_APPEND);
	} while (readFile > 0);
	free(inputBuffer);
	closeFile(fromFile);
	closeFile(toFile);
	return (0);
}
