#include <stdio.h>

/**
 * main - Prints the alphabetic
 *
 * Return: At 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
