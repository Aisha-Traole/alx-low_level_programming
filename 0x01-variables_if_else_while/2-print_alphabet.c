#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block 
 * Description: print alphabet lower case
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}

