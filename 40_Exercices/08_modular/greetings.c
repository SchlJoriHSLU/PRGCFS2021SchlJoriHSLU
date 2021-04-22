/* system includes */
#include<stdio.h>

/* local includes */
#include "greetings.h"


/* global variable */
int greetingsCounter = 0;



/* implementations */

void SayHello(void) {
	printf("Hello!\n");
	greetingsCounter++;

}
void SayGoodBye(void)  {
	printf("Goodbye!\n");
	greetingsCounter++;
}

