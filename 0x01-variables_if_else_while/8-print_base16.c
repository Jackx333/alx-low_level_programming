#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	int letter;

	number = 0;
	letter = 'a';

	while (number < 10 )
	{
		putchar (number + 48);
		number++;
	}
	while (letter < 'g')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}
