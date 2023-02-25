#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * (neither 2 nor 4)
 * Return: no return
 */

void print_most_numbers(void)
{
	int cr;

	for (cr = 48; cr < 58; cr++)
	{
		if (cr != 50 && cr != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
