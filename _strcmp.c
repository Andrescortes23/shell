#include "shell.h"
/**
 *_strcmp - compare two strings
 *@s: string 1
 *@s1: string 2
 *Return: the result
 */
int _strcmp(char *s, char *s1)
{
	int i = 0;

	while (s[i] != '\0' || s1[i] != '\0')
	{
		if (s[i] != s1[i])
			return (s[i] - s1[i]);
		i++;
	}
	return (0);
}
