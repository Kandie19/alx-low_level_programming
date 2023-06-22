#include "main.h"

/**
 * _isupper - checks if aletter is upper
 * @x: The number to be checked
 * Return: 1 for upper letter or 0 fort else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
