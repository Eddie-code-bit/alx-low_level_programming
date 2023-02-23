#include "main.h"

/**
 * _islower - checks if a character is in lowercase
 * @c: the said character
 * Return: It will return 1 if the letter in sin lower care, else returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
