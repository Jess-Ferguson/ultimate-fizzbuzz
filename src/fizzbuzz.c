#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/fizzbuzz.h"

const size_t nums[] = {
						3,
						5,
					};

const char * strings[] = {
						"fizz",
						"buzz",
					};

void fizzbuzz(size_t max)
{
	char output[32] = { '\0' };

	for(size_t i = 1; i <= max; i++) {	
		for(size_t j = 0; j < sizeof(nums) / sizeof(nums[0]); j++) {
			if(i % nums[j] == 0) {
				strcat(output, strings[j]);
			}
		}

		if(output[0] == '\0') {
			printf("%ld\n", i);
			continue;
		}

		puts(output);
		output[0] = '\0';
	}

	return;
}

void usage(char * name)
{
	fprintf(stderr, "Usage: %s [max]\n", name);

	return;
}