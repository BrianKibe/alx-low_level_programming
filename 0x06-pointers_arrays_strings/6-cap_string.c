#include "main.h"

/**
 * lowercase -  Checks if a character is lowercase
 * @c: character
 * Return: 1 if lower, 0 otherwise
 */
int lowercase(char c)
{
	return (c >= 'a' && c <= 'z');

}
/**
 * capitalize - capitalizes a character
 * @c: character to check
 * Return: capitalized character
 */
char capitalize(char c)
{
	if (lowercase(c))
		return (c - ('a' - 'A'));
	else
		return (c);
}
/**
 * cap_string - Capitalizes words in a string
 * @s: String to capitalize
 *
 * Return: Capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;
	int capitalize_next = 1;

	while (s[i] != '\0')
	{
		if (capitalize_next && lowercase(s[i]))
			s[i] = capitalize(s[i]);

		if (s[i] == ' ' || s[i] == ',' ||
s[i] == ';' || s[i] == '?' || s[i] == '(' ||
s[i] == ')' || s[i] == '{' || s[i] == '}' ||
		   s[i] == '!' || s[i] == '"' ||
		  s[i] == '.' || s[i] == '\n' || s[i] == '\t')
		{
			capitalize_next = 1;
			}
		else
		{
			capitalize_next = 0;
			}
		i++;
	}	return s;
}
