#include "shell.h"
/**
 *tokenpath - create tokens from what user typed
 *@line: string to make tokens
 *Return: pointer to memory that allocated the string in tokens
 */
char **tokenpath(char *line)
{

	char *bufftok;
	int size = 1024;
	char **buff;
	int i = 0;

	buff = malloc(sizeof(char *) * size);
	if (!buff)
	{
		free(line);
		return (0);
	}

	bufftok = strtok(line, ":");
	while (bufftok)
	{
		buff[i] = bufftok;
		i++;
		bufftok = strtok(NULL, ":");
	}

	buff[i] = NULL;
	return (buff);
}
