#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src++) != '\n')
		dest[i++] = src[i++];
	dest[i] = '\0';
	return (dest);
}
