#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowlet;

	lowlet = 'a';
	while (lowlet <= 'z')
	{
		if (lowlet == 'e' || lowlet == 'q')
		{
			continue;
		}
		putchar (lowlet);
		lowlet++;
	}
	putchar ('\n');
	return (0);
}
