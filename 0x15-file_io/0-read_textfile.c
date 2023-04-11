#include "main.h"
#include <stdlib.h>
/**
*read_textfile - Reads a text file, prints out a specified number of letters.
*@filename: The name of the file to be read.
*@letters: The number of letters to be printed.
*Return: Successful, returns the number of letters printed, or returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int ac;
ssize_t nrd, b;
char *h;

if (!filename)
return (0);

ac = open(filename, O_RDONLY);

if (ac == -1)
return (0);

h = malloc(sizeof(char) * (letters));
if (!h)
return (0);

nrd = read(ac, h, letters);
b = write(STDOUT_FILENO, h, nrd);

close(ac);

free(h);

return (b);
}
