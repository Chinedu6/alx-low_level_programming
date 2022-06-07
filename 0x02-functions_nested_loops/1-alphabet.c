#include "main.h"
/**
* print_alphabet - print the alphabet in lowercae followed by  a newline
*
* Return: void
*/

void print_alphabet(void)
{
	char c;
	int i;

	c = 'a';
	i = 0;

	while (i <= 25)
	{
		_putchar(c + i);
		i++;
	}
	_putchar('\n');
}
