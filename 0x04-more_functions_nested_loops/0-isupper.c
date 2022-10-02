#include "maih.h"

/**
 * _isupper -  function that checks for uppercase character.
 * @c: uppercase
 * Return: 1 if arg is uppercase,
 * 0 if arg it is not.
 */
int _isupper(int c)
{
	if (c >= '65' && c <= '90')
{
	return (1);
}
	else
	{
	return (0);
	}
}
