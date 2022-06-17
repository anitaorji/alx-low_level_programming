#include "main.h"

/**
 * main - entry
 * @dest: the string to be appended upon.
 * @src: the sting to be appended to dest.
 * @n: the number of bytes from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
