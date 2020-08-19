#include "shell.h"
/**
 *_strcpy - copy string
 *@dest: string
 *@src: string
 *Return: pointer to new string
 */
char *_strcpy(char *dest, char *src)
{
	int ind0, ind1;

	ind0 = 0;
	while (src[ind0])
		ind0++;
	ind1 = 0;
	while (ind1 < ind0)
	{
		dest[ind1] = src[ind1];
		ind1++;
	}
	dest[ind0] = '\0';
	return (dest);
}
