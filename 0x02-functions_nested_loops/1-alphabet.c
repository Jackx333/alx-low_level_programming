#include "main.h"
/**
 * print_alphabet - uses _putchar
 *
 */
void print_alphabet(void)
{
	int ch;
	
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar (ch);
		ch++;
	}
}
