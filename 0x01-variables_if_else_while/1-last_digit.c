#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * main - i aint going to describe
 *
 * Return: always 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d and is ", n, m);
	if (m > 5)
		printf("greater than 5\n");
	else if (m == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
