#include "holberton.h"
/**
 * _islower - checks if c is in lowercase.
 *@c: being the character to check.
 * Return: Always 0.
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
