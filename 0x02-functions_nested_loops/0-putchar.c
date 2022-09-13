#include "main.h"
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char *iretomiwa = "_putchar";

	while (*iretomiwa)
	{
		_putchar(*iretomiwa);
		iretomiwa++;
	}
	_putchar('\n');
	return (0);
}
