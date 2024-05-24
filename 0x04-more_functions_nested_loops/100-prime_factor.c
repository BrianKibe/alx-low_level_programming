#include <stdio.h>
#include <math.h>
/**
 * largestPrimeFactor()-finds largest prime factor
 * @n: integer to check
 * Return: largest factor
 */
long int largestPrimeFactor(long int n)
{
	long int largest = -1;
	long int i;

	while (n % 2 == 0)
	{
		largest = 2;
		n = n / 2;
	}
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}
	if (n > 2)
		largest = n;
	return (largest);
}
/**
 * main - calls functions
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	long int largestPrime = largestPrimeFactor(n);

	if (largestPrime != -1)
		printf("%ld\n", largestPrime);
	else
		printf("No prime factors found.\n");
	return (0);
}
