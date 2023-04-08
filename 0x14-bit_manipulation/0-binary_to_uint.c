#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int h;
unsigned int decimal_value = 0;

if (!b)
return (0);

for (h = 0; b[h]; h++)
{
if (b[h] < '0' || b[h] > '1')
return (0);
decimal_value = 2 * decimal_value + (b[h] - '0');
}
return (decimal_value);
}
