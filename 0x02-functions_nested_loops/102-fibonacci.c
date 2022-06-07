#include <stdio.h>

/**
* main - Prints the sum of natural numbers less than 1024 which are \
* multiples of 3 or 5
*
* Return: Always 0.
*/
int main(void)
{
	int num, sum;

	num = 1;
	sum = 0;

	while (num < 1024)
	{
		if ((num % 3) || (num % 5))
			sum += num;

		num++;
	}

	printf("%d\n", num);

	return (0);
}
