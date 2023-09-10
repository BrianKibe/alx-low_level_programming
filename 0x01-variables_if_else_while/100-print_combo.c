#include<stdio.h>
/**
 * main - permutations of numbers 
 * @void - blanks
 * Return: Always 0
 */

int main(void)
{
	
	int first_digit = 0, second_digit = 1;


	while (first_digit <= 8)
       	{

    		while (second_digit <= 9)
	       {
		       putchar('0' + first_digit);
        		putchar('0' + second_digit);

        if (!(first_digit == 8 && second_digit == 9))
       {
	       putchar(',');
            	putchar(' ');
       }

        second_digit++;
    }

    first_digit++;
    second_digit = first_digit + 1;
}

putchar('\n');
return (0);
}
