#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1-100 with fizz buzz replacing multiples of 3 and 5
 * Return: 0 for success
 */
int main(void)
{

	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
