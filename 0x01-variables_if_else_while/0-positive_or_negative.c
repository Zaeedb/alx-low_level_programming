#include <stdlib.h>
#include <time.h>
#include <stdoi.h>
/**
 * main - prints if number is positive, zero or negative
 * Return: Always (success)
 */

int main(void)

{
	int n;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negatif\n", n);
	else
	printf("%d is zero\n", n);
	return (0);

}
