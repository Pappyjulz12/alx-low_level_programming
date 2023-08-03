#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to the stdout
 * @c: The character to be printed
 *
 * Return:To 1 On success.
 * On error, -1 is returned, and the  errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
