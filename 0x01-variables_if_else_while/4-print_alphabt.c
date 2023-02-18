#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * get a random number and check its
 * return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')

	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}
