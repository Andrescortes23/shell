#include "shell.h"
/**
 *excecute - create a new proces who excecute the command user typed
 *@s: the string of tokens
 *@env: enviroment variables
 *Return: nothing, -1 in case of error
 */
int excecute(char **s, char **env)
{
	pid_t child;
	int status;
	struct stat st;

	child = fork();

	if (child == -1)
	{
		perror("Error:");
		free(s);
		return (1);
	}
	if (child == 0)
	{
		/*s[0] = _which(s[0], env);*/
		if (stat(s[0], &st) == 0)
			execve(s[0], s, env);

		else
		{
			perror("Error");
			exit(0);
		}


		free(s);
		kill(getpid(), 1);
	}
	wait(&status);
	free(s);
	return (0);
}
