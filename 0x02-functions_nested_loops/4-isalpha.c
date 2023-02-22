#include "main.h"

/**
 *_isalpha - function that checks for lowercase alphabets
 *@c: parameter to be checked
 *  Return:0 or 1 depending on condition
 */

int -isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
}
