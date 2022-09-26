#include <stdio.h>
#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 *
 * @s: Arrray to be filled
 * @b: Constant to be fiiled with
 * @n: Bytes of memory to fill
 *
 *Return: A  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 10; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
