#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program to see the last digit
 * @void - blank
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10 > 5)
	{
		printf("Last digit of %d is %d/10 and is greater than \n",n,n);
	}
	else if (n%10 < 6 && n%10 != 0)
	{
		printf("Last digit of %d is %d/10 and is less than 6 and not 0\n",n,n);
	}
	else
	{
       printf("Last digit of %d is %d/10 and is 0\n",n,n);
	}
	return (0);
}
