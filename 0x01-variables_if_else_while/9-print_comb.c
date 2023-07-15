#include<stdio.h>
 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		if (num == 9)
		{
			continue;
		}

		putchar (num + 48);
		putchar (',');
		putchar (' ');
		num++;
	}
	putchar ('\n');
	return (0);
}
