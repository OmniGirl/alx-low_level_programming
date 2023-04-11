#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: Name of the file to append to.
 * @text_content: Text content to append.
 *
 * Return: On success, returns 1. On failure (e.g. if file does not exist),
 * returns -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int ac;
int nletters;
int a;

if (!filename)
return (-1);

ac = open(filename, O_WRONLY | O_APPEND);

if (ac == -1)
return (-1);

if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;

a = write(ac, text_content, nletters);

if (a == -1)
return (-1);
}

close(ac);
return (1);
}
