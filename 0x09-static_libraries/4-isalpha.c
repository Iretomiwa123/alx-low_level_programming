#include "main.h"

/**
 * _isalpha - check for alphabetical character
 * @c: parameter
 * Return: always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
