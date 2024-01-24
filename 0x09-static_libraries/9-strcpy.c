#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy the string pointed
 * to by src including terminating
 * null byte to buffer pointed to
 * by dest
 * @dest: Destination
 * @src: Source
 * Return: pointer to Dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);

}
