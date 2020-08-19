#include "shell.h"
/**
 *_getline - to recibe what user type in stdin
 *Return: a pointer to what user typed
 */
char *_getline()
{
	size_t num_bytes = 1024;
	ssize_t chars;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	chars = getline(&buffer, &num_bytes, stdin);
	if (chars == EOF)
	{
		free(buffer);
		exit(0);
	}
	buffer[chars - 1] = '\0';

	return (buffer);
}
