#include "main.h"

/**
 * print_alphabet - entry point
 * Description: show the alphabet
 * Return 
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
