#include "main.h"

/**
 * get_endianness - This checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
unsigned int i = 1;
char *c = (char *) &i;
if (*c)
return (1); /* little endian */
else
return (0); /* big endian */
}
