#include <stdlib.h>
#include <time.h>
/**
 * main - Determines if a number is postive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n = 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
