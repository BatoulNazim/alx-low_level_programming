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
