#include "main.h"

/**
 *
 *
 * _strlen - function that returns the lenth of a string
 *
 * *s - string
 * count- legth of string
 *
 */

int _strlen(char *s)
{
int count;
count = 0;
while (*s != '\0')
{
++count;
s++;
}
return count;
}
