/* 
 *	Filename:	ultimate_fizzbuzz.c
 *	Author:	 	Jess Turner
 *	Date:		24/05/20
 *	Licence:	GNU GPL V3
 *
 *	An overdeveloped implementation of of the game "Fizzbuzz" as is commonly used for programming interviews
 *
 *	Return/exit codes:
 *		EXIT_SUCCESS	- No error
 *		ARG_ERROR		- Invalid argument given
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "../include/fizzbuzz.h"

int main(int argc, char *argv[])
{
	size_t	max = MAX_DEFAULT;

	if(argc > 1) {
		if((max = strtol(argv[1], NULL, 0)) <= 0) {
			 fprintf(stderr, "Error: Invalid argument!\n");
			 usage(argv[0]);
			 return ARG_ERROR;
		}
	}

	fizzbuzz(max);

	return EXIT_SUCCESS;
}

