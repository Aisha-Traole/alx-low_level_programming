#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: print all possible combinations of single_digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10);
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putcahr(' ');
		}
		c++

	}
	putchar('\n');
	return (0);
}
