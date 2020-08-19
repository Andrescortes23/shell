#include "shell.h"
/**
 *_which - find the path where is the command typed
 *@s: command typed
 *@env: enviroment variables
 *Return: pointer to path
 */
char *_which(char *s, char **env)
{
	char *tmp1 = NULL, *tmp2 = NULL, **pathh = NULL;
	int size, x = 0;
	struct stat st;

	size = _strlen(s);
	if (!s)
		return (NULL);
	tmp1 = _getenv("PATH", env);
	pathh = tokenpath(tmp1);
	for (; pathh[x] != NULL; x++)
	{
		if (_strcmp(pathh[x], "PATH=") == 0)
		{
			if (stat(s, &st) == 0)
			{
				free(pathh);
				return (s);
			}
		}
		tmp2 = malloc(_strlen(pathh[x]) + size + 1);
		if (!tmp2)
		{
			free(pathh);
			return (tmp2);
		}
		tmp2 = _strcpy(tmp2, pathh[x]);
		tmp2 = _strcat(tmp2, "/");
		tmp2 = _strcat(tmp2, s);
		if (stat(tmp2, &st) == 0)
		{
			free(pathh);
			return (tmp2);
		}
	}
	free(pathh);
	if (stat(s, &st) == 0)
		return (s);
	return (NULL);
}
