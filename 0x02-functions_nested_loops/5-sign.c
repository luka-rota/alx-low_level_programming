#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 *
 *  Return: 1 prints '+' if n > 0,
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else
	{
	_putchar ('-');
	return (-1);
	}
}
