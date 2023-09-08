#include <stdio.h>
/**
 * main - prints alphabet in lowearcase,then uppercase
 * @void - blank
 * Return: Always 0
 */
int main(void)
{
	char alphabet, ALPHABET;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (ALPHABET = 'A' ; ALPHABET <= 'Z'; ALPHABET++)
	{
		putchar(ALPHABET);
	}
	putchar('\n');
	return (0);
}

