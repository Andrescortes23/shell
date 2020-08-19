#include "shell.h"
/**
 *_strncmp - compare the first n letters of two strings
 *@s: string
 *@s1: string
 *@n: until what char going to compare
 *Return: the result of s - s1
 */
int _strncmp(char *s, const char *s1, int n)
{
	int i = 0;

	while (i < n)
	{
		if (s[i] != s1[i])
			return (s[i] - s1[i]);
		i++;
	}
	return (0);
}
