#include "shell.h"
/**
 *_getenv - find variable in enviroment variables
 *@path: variable we want find
 *@env: enviroment variables
 *Return: pointer to our variable
 */
char *_getenv(const char *path, char **env)
{
	size_t ind = 0;
	char *s;

	while (env[ind] != NULL)
	{
		if (_strncmp(env[ind], path, 4) == 0)
		{
			s = env[ind];
			return (s);
		}
		ind++;
	}
	return (NULL);
}
