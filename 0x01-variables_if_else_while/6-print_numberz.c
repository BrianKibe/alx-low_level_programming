#include <stdio.h>
/**
 * main - prints numbers, in base 10 with new line
 * @void - blanks
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');
	return (0);

}

