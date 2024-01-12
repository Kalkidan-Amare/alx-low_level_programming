#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int i;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int num = atio(argv[1];

	for (i = 0; i < 5; i++)
		if (coins[i] < num)
		{
			count += num / coins[i];
			num %= coins[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
