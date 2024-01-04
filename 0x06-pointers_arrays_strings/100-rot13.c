#include "main.h"

/**
 * rot13 - encoding
 * @s: input
 *
 * Return: array of char
 */

char *rot13(char *s)
{
	int i;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
	return (s);
}
