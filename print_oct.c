#include "main.h"
/**
 * print_oct - outputs base 8 num
 * @num: args to be formatted
 * Return: count of digit outputted
 **/
int print_oct (unsigned int num)
{
	int i, count = 0;
	int *digits;
	unsigned int tmp = num;
	
	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;

	digits = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		digits[i] = tmp % 8;
		tmp /= 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digits[i] + '0');
	}

	free(digits);

	return (count);
}
