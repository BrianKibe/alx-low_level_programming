#include "main.h"
/**
 * print_triangle()-function to print triangle
 * @size: number to use
 * Return: Always 0
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size - row - 1; column++)
		{
			_putchar(' ');
		}
		for (column = 0; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
