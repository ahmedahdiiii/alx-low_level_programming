#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number.
 * @index: the index.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~clear);
		return (1);
	}
	return (-1);
}
