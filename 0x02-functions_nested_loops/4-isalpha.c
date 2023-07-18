#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @c: alphabet to be verified
 *
 * Return:0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

