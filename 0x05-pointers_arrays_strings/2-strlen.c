#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: the string to get the length of
 *
 * return: the length of @s.
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
