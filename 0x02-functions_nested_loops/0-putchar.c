#include "main.h"
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char *main = "_putchar";

	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
