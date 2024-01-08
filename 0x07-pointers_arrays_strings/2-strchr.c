#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: a pointer to the character
 */

char *_strchr(char *s, char c)
{
	char *temp = NULL;
	int status = 0;

	while (*s != '\0')
		if (*s == c)
		{
			status = 1
			break;
		}
	if (status == 1)
	{
		temp = s;
	}

	return temp
}
