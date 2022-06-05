#include <stdio.h>
/**
 *main - starting point of the program
 *
 *Return: 0
 */
int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}

	putchar('\n');

	return (0);
}
