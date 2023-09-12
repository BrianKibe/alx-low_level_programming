#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet ten times
 *@void
 */
void print_alphabet_x10(void)
{
	int q;
	int i;

	for (q = 0; q < 10; q++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
}
}
