#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: void
 */
char *_strcat(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

if (i < n)
{
dest[i] = '\0';
}

return (dest);
}

int main(void)
{
/* This is the main function. It prints the results of the strncat() function. */
char dest[100];
char src[] = "This is a test string.";

_strncpy(dest, src, 50);

printf("The copied string is: %s\n", dest);

return (0);
}
