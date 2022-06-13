#include <stdio.h>

/**
 * main - Print numbers of base 10 starting from 0
 *
 * Return: Always (0)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
