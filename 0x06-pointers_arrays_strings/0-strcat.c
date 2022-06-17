#include "main.h"

/**
 * main - entry
 * @dest: A pointer to the string to be cncatenated upon.
 * @src: The source string to be appended to by @dest
 * Return: a pointer to the destination
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
