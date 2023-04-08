#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit at a specified index in a decimal number.
 *
 * @n: The decimal number to search.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the specified index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
{
return (-1);
}
return ((n >> index) & 1);
}
