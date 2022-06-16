#include "main.h"

/**
 * print_alphabet - entry point
 * Description: show the alphabet
 * Return
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
