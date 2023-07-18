#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks for alphabetic character
 * @C: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{
	// The parameter `c` is the character to be tested.

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
