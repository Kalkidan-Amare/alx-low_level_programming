#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
* Description: print alphabet 10 times
* Return: void
*/

void print_alphabet_x10(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		int num = 97;

		for (; num < 123; num++)
			_putchar(num);

		_putchar('\n');
	}
}
