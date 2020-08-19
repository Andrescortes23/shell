#include "shell.h"
/**
 *NewLine - catch SIGINT ^C
 *@sign: signal to find
 *Return: 0
 */
void NewLine(int sign)
{
	if (sign == SIGINT)
	{
		if (isatty(STDIN_FILENO))
			write(STDIN_FILENO, "\n$ ^C ", 6);
	}
}
