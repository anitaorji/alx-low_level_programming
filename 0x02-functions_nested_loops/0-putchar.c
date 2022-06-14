#include "main.h"
#include <stdio.h>
#include <unistd.h>

/*
 * main - write the character
 * @c: The character to print
 *
 * Return: 0
 */
int main()
{
	write(1, "_putchar\n", 9);

	return (0);
}
