#include "main.h"

/**
 * print_Hexa_helper - Function prints hexadecimal lower case.
 * @num: The arguments.
 * Return: count.
 */

int print_Hexa_helper(unsigned int num)
{
	int p;
	int *arr;
	int count = 0;
	unsigned int tmp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	p = 0;
	while (p < count)
	{
		arr[p] = tmp % 16;
		tmp /= 16;
		p++;
	}
	for (p = count - 1; p >= 0; p--)
	{
		if (arr[p] > 9)
			arr[p] += 7;
		_putchar(arr[p] + '0');
	}
	free(arr);
	return (count);
}
