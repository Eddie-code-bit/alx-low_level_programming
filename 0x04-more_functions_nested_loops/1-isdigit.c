#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 and 9
 * @c: input number
 * Return: return 1 if (0 to 9) or otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
