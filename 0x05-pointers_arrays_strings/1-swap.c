#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)

{
	int h;
	h = *a;
	*a = *b;
	*b = h;
}
