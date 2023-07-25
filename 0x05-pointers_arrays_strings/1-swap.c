#include "main.h"

/**
 *
 *
 * swap_int - function that swaps the value of two intergers.
 * a = int1
 * b = int2
 *
 * Return - int.
 */

void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
