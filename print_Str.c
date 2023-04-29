#include "main.h"
/**
 * print_Str -  prints the string
 * @str: argument to printed
 * Return: count
 **/

int print_Str(char *str)
{
	int j, size = 0;
	int temp;

	if (str == NULL)
		str = "(null)";
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < 32 || str[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			size += 2;
			temp = str[j];
			if (temp < 16)
			{
				_putchar('0');
				size++;
			}
			size += print_Hexa_helper(temp);
		}
		else
		{
			_putchar(str[j]);
			size++;
		}
		j++;
	}
	return (size);
}
