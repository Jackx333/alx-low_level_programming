#include<stdio.h>
 /**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 48;
	while(num < 102)
	{
		putchar (num);
		putchar (',');
		putchar (' ');
		num++;
	}
}
