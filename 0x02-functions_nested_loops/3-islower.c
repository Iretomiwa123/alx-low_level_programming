#include "main.h"

/**
 * _islower - check if character is lowercase
 *@c: parameter
 * Return: always 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
