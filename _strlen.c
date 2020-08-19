#include "shell.h"
/**
 *_strlen - to know the length of string
 *@s: string
 *Return: integer with the lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
