#include "main.h"
/**
 * print_last_digit - check code
 * @n: it prints out the last digit of a num input
 * Return: valuer of 1
 */
int print_last_digit(int n);
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		i *= -1;
	}

	_putchar(i + '0');

	return (i);
}
