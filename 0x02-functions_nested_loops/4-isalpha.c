#include "main.h"
/**
 * main - check the code
 *
 * @c: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'b' && c <= 'h') || (c >= 'B' && c <= 'H'));

}


