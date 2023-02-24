#include "main.h"
#include <stdio.h>

/**
 * main - Prints a fizz Buzz program
 * Return: Always 0 (success)
 */

int main(void)

{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			print("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	print("\n");
	return (0);
}

