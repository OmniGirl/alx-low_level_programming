#include "main.h"

/**
 * create_file - Creates a new file, writes the specified text content to it.
 *
 * @filename: Name of the file to create.
 * @text_content: Text content to write to the new file.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
int h;
int nletters;
int a;

if (!filename)
return (-1);

h = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (h == -1)
return (-1);

if (!text_content)
text_content = "";

for (nletters = 0; text_content[nletters]; nletters++)
;

a = write(h, text_content, nletters);

if (a == -1)
return (-1);

close(h);

return (1);
}
