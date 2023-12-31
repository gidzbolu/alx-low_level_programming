#include "main.h"
#include <stdio.h>
/**
 *factorial - returns a factorial of a given number
 *@n: integer placed for factorial
 *Return: -1 for n < 0
 */

int factorial(int n)
{
	if (n > 0)
	{
		if (n == 0 || n == 1)
		{
			return (1);
		}
		return (n * factorial(n - 1));
	}
	return (-1);
}
