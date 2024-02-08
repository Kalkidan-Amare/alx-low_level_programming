#include "main.h"

/**
	* _pow - returns the base raised to a certain power
	* @base: number
	* @power: power of base to be raised  to
	* Description: returns the base raised to a certain power
	* Return: int
*/
int _pow(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * _pow(base, power - 1));
}

/**
	* set_bit - sets the value of a bit to 1 at given index
	* @n: number to set the bit of
	* @index: index of number to set bit to 1
	* Description: sets the value of a bit to 1 at given index
	* Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8) - 1)
		return (-1);

	*n = *n + _pow(2, index);
	return (1);
}
