#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : input
 * @src : input
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++

	while (src[j] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}