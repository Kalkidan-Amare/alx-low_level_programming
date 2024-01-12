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
	int i, num, count;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	count = 0;
	num = atoi(argv[1];

	for (i = 0; i < 5 && num > 0; i++)
		if (coins[i] <= num)
		{
			count += num / coins[i];
			num %= coins[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
