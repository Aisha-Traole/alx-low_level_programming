#include <stdio.h>
/**
 * main - main block 
 * Description: Print alphabet lower case except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++
	}

	putchar('\n');
	return (0);
}
