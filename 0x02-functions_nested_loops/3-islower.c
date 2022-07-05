#include "main.h"
/**
 * _islower - checkes if a character is lower case
 * @c: character to be tested
 * Return: 1 on true and 0 on false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
