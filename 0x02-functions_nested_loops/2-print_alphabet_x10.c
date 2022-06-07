#include "main.h"
/**
* print_alphabet_x10 - prints the alphabets a to z 10 times
*
* Return: Always void
*/
void print_alphabet_x10(void)
{
	char ch = 'a';

	int count = 0;

	while (count < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		ch = 'a';

		count++;
	}
}
