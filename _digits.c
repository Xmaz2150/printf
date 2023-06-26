#include "main.h"

/**
 * _sum_digit - counts digits in num
 * @n: Input, num
 *
 * Return: (int) sum of digits
 */
int _sum_digit(int n)
{
	int count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
