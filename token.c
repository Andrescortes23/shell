#include "shell.h"
/**
 *token - create tokens from what user typed
 *@line: string to make tokens
 *Return: pointer to memory that allocated the string in tokens
 */
char **token(char *line)
{

	char *bufftok = NULL;
	int size = 1024;
	char **buff = NULL;
	int i = 0;

	buff = malloc(sizeof(char *) * size);
	if (!buff)
	{
		free(line);
		return (0);
	}

	bufftok = strtok(line, " ");
	while (bufftok)
	{
		buff[i] = bufftok;
		i++;
		bufftok = strtok(NULL, " ");
	}

	buff[i] = NULL;
	return (buff);
}
