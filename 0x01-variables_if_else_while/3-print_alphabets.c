#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low_letter;
	int up_letter;

	low_letter = 'a';
	up_letter = 'A';
	while(low_letter <= 'z')
	{
		putchar (low_letter);
		low_letter++;
	}
	while (up_letter <= 'Z')
	{
		putchar (up_letter);
		up_letter++;
	}
	putchar('\n');
	return (0);
}
