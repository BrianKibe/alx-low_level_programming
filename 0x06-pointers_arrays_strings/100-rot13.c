#include "main.h"
char *rot13(char *s)
{
    char *start = s;
    while (*s != '\0')
    {
        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
        {
            if ((*s >= 'A' && *s <= 'M') || (*s >= 'a' && *s <= 'm'))
                *s += 13;
            else
                *s -= 13;
        }
        s++;
    }
    return start;
}
