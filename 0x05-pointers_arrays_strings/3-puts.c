#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str - string to be printed.
 */

void _puts(char *str)
{
	int a;
	a = 0;
	 while(str[a] != "\0")
	{
		a++;
		_putchar(str[a]);
	}
		_putchar("\n");
}
