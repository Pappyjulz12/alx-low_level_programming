#include "main.h"

/**
 * get_bit - To return the value of a bit at an index in a decimal number
 * @n: The number to search
 * @index: the bit of the index
 *
 * Return: On success for value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
	return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
