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
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
	return (s);
}
