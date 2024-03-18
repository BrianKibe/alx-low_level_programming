#include "main.h"
/**
 * cap_string - capitalizes words in string
 * @s: string to capitalize
 *
 * Return: nothing
 */

int isLowercase (char c)
{
	return c >= 'a' && c <= 'z';

}

char capitalize (char c)
{
	if (isLowercase(c))
		return c - ('a' - 'A');
	else
		return c;
}

char *cap_string(char *s)
{

	
	int i = 0;
	int capitalize_next = 1;

	while (s[i] != '\0')
	{
		if (capitalize_next && isLowercase(s[i]))
				{
					s[i] = capitalize(s[i]);
				}

		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '?' || s[i] == '(' ||
		   s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '!' || s[i] == '"' ||
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
