#include "main.h"
/**
 * _abs(int)- computes absolute value
 * of an integer
 * @n: integer to compute value of
 * Return: absolute integer value
 * of the number
 */

int _abs(int n)
{

	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-n);

}
}
