/*
Aufgaben:
1.	00000110 = 6
	00001100 = 12
	00011000 = 24
--> Die Zahl wird mit der Verschiebung von Bits verdoppelt bzw. halbiert.


*/

#include<stdio.h>
#include<stdlib.h>



const int NUM_VAL=1;

int main(int argc, char *argv[])
{
	if( argc != NUM_VAL + 1 )
	{
		printf("Usage:\n");
		printf(" false Value. Write only one logic operator but not 0. \n");	
	}
	else
	{
		int val = atoi (argv[1]);
		if(val == 0)
		{
			printf("Usage:\n");
			printf(" false Value. Write only one logic operator but not 0. \n");
		}
		else 
		{
			int menuInput=0;
			printf(" input is %d \n \n", val);
			printf("Select from the following options: \n");
			printf("1: Shift one to the left \n");
			printf("2: Shift one to the right \n");
			scanf(" %d ", &menuInput);
			int menuSelected = 
		}	
		
	}
	

	




return 0;
}
