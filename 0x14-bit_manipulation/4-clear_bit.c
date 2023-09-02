#include "main.h"

/**
 * clear_bit - To sets the value of a given bit to 0
 * @n: Pointer to the number to change
 * @index: all index of the bit to clear
 *
 * Return: to 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

