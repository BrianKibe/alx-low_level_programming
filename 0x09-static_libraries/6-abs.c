#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: integer to be used
 * Return: absoulute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
