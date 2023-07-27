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
int j;

i = 0;
while I(dest[i])
{
i++;
}
for (j = 0; j  < n && src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}

dest[i + j] = '\0';
return (dest);
}
