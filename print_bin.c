#include "main.h"
/**
 * print_bin - converts decimal to binary
 * @num: the argument to be converted
 * Return: the count of elem printed
 **/
int print_bin(unsigned int num)
{
	unsigned int max, i, sum;
	unsigned int arr[32];
	int count;

	max = 2147483648;
	arr[0] = num / m;

	for (i = 1; i < 32; i++)
	{
		max /= 2;
		arr[i] = (num / max) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += arr[i];
		if (sum || i == 31)
		{
			_putchar('0' + arr[i]);
			count++;
		}
	}
	return (count);
}
