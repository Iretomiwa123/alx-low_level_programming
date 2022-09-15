#include "main.h"
/**
 * mul - function that multiplies two integers
 * @a: integer
 * @b: integer
 * Return: always 0
 */
int mul(int a, int b)
{
for (a = 1; a <= 10; a++)
{
for (b = 1; b <= 10; b++)
_putchar(" %d ,", a * b);
_putchar("\n");
}
return (0);
}
