#include "main.h"
/**
 * print_alphabet - a function that print the alphabet in lower case
 *
 * return: always 0 sucesss
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
