#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i, j;

	for(; i < 9; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar(i * 9);
		_putchar('\n');
	}
}
