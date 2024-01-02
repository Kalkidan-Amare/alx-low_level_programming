#include "main.h"

/**
 * _strlen - returns length
 *
 * @s: input
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
