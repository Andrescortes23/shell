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
	int x = 0;
	struct stat st;

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
		tmp2 = malloc(sizeof(char) * (_strlen(s) + _strlen(pathh[x]) + 2));
		if (!tmp2)
		{
			free(pathh);
			return (tmp2);
		}
		tmp2[0] = '\0';
		tmp2 = _strcat(tmp2, pathh[x]);
		tmp2 = _strcat(tmp2, "/");
		tmp2 = _strcat(tmp2, s);
		printf("%s\n", tmp2);
		if (stat(tmp2, &st) == 0)
		{
			free(pathh);
			return (tmp2);
		}
		free(tmp2);
	}
	free(pathh);
	if (stat(s, &st) == 0)
		return (s);
	return (NULL);
}
