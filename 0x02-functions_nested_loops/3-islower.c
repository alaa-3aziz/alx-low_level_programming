#include "main.h"

/**
 *_islower - function to check if
 *	character is lowercase
 *
 *@c: checks input of function
 *
 *return: returns 1 if "c" is lowercase if not return 0 (success)
*/

void _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
