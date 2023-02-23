#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number to be printed
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (n < 0)
		lastd = -lastd;
	return (lastd);
}
