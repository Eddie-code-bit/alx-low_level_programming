#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character
 * @c: character to be tested
 * Return: 1 if case is in uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
