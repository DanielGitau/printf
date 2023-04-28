#include "main.h"
/**
 * print_bin - converts decimal to binary
 * @num: the argument to be converted
 * Return: the count of elem printed
 **/
int print_bin(unsigned int num)
{
	unsigned int m, i, sum;
	unsigned int a[32];
	int count;
	char z;

	m = 2147483648;
	a[0] = num / m;

	for (i = 1; i < 32; i++)
	{
		m /= 2;
		a[i] = (num / m) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			z = '0' + a[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}
