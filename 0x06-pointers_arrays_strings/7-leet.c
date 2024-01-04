#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i = 0, j;

	char arr[] = "aAeEoOtTlL";
	char val[] = "4433007711";

	while (n[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == arr[j])
				n[i] = arr[j];
		}
		i++;
	}

	return (n);
}
