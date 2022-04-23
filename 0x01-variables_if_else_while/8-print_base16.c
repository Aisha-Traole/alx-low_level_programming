#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: print all the numbers of base 16
 * Return:Always 0 (Success)
 */
int main(void)
{
	int i,y;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}

putchar('\n');
return (0);
}
