#include "shell.h"
/**
 *_strdup - to duplicate string
 *@s: string to duplicate
 *Return: pointer  to string duplicated
 */
char *_strdup(char *s)
{
	int size;
	static char *buff;
	char *tmp;

	size = _strlen(s); /*to know the lenght of string*/
	buff = malloc(sizeof(char) * (size + 1));
	if (buff == NULL)
	{
		return (NULL);
	}

	tmp = buff; /*now i can acces to my buffer*/
	while (*s)
	{
		*tmp = *s; /*paste what is in s to tmp, who point to buff*/
		tmp++;
		s++;
	}
	*tmp = '\0';

	return (buff);
}
