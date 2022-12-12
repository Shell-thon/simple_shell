#include "shell.h"

/**
 * _atoi -convert a string to an integer.
 *
 * @prmstring: char pointer
 *
 * Return: int
 */
int _atoi(char *prmstring)
{	char sign = 1, current;
	int size = _strlen(prmstring), cLoop;
	unsigned int number = 0;
	
	for (cLoop = 0;  cLoop < size; cLoop++)
	{
	 	current = prmstring[cLoop];

		if(_isdigit(current))
		{
			  number *= 10;
			  mnumber += current -48;
		}
		else if (current == '-')
		  	sign = -sign;
		else if (number > 0)
		  	break;
	}

	return (sign * number);
}
