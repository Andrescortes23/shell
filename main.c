#include "shell.h"
/**
 *main - start the simple shell
 *@ac: number of arguments
 *@av: arguments
 *@env: enviroments variables
 *Return: 0
 */

int main(__attribute__((unused))int ac, __attribute__((unused))char **av,
	 char **env)
{

	char *line, **tkline;

	while (1)
	{
		tkline = NULL;
		line = NULL;
		if (isatty(STDIN_FILENO))
			write(STDIN_FILENO, PROMPT, 2);
		signal(SIGINT, NewLine); /*make signal in case of find ^C*/
		line = _getline(); /*do getline & return a buffer with recived*/
		tkline = token(line); /*doing token from what input recibe*/
		if (_strcmp(tkline[0], "exit") == 0)
			break;
		else if (_strcmp(tkline[0], "exit") != 0)
			excecute(tkline, env); /* excecute the command*/
		//free(tkline);
		//free(line);
	}
	free(line);
	free(tkline);
	return (0);
}
