#include "main.h"
/**
 * int factorial(int n): factorial of a given number
 * @ n: number to pass to function
 * return: factorial of number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
