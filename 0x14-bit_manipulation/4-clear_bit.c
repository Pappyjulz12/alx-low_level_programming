#include "main.h"

/**
 * clear_bit -The  sets value of a given bit to 0.
 * @n:The pointer to the number to change.
 * @index: index of the bit to clear.
 *
 * Return:To 1 for success,and  -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
