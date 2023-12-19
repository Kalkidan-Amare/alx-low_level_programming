#include "main.h"

/**
 * main - print _putchar
 *
 * Return: always 0
 */

int main(void)
{
	char iteam[] = "_putchar";
	int i = 0;

	for (; i < 8; i++)
		_putchar(iteam[i]);

	_putchar('\n');

	return (0);
}
