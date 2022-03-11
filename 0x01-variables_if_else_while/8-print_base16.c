#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all numbers of base 16 in lowercase
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
