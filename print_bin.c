#include "main.h"
/**
 *print_bin - Converts unsigned int to binary
 *return: The number of digits outputed
 */
int print_bin(unsigned int num)
{
	int count = 0;

	if (num > 1)
	{
		print_bin(num / 2);
	}
	 _putchar(num % 2 + '0');
	 count++;
	return (count);
}
