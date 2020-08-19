#include "shell.h"
/**
 *_strcat - will concatenate two strings
 *@dest: destination string
 *@src: string to add
 *Return: ponter to string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
