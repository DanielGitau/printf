#include "main.h"

/**
 * print_hexa - Function prints hexadecimal lower case.
 * @val: The arguments.
 * Return: count.
 */

int print_hexa(unsigned int num)
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

	for (p = 0; p < count; p++)
	{
		arr[p] = tmp % 16;
		tmp /= 16;
	}
	for (p = count - 1; p >= 0; p--)
	{
		if (arr[p] > 9)
			arr[p] = arr[p] + 39;
		_putchar(arr[p] + '0');
	}
	free(arr);
	return (count);
}


