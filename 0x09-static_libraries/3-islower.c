#include "main.h"
/**
 * _islower - test for a lowercase letter
 * @c: - letter to test
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


