#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: said character to be checked
 * Return: 1 to be displayed if letter, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
