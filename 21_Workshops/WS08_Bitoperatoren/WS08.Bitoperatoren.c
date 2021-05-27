#include<stdio.h>
#include<stdlib.h>



const int NUM_VAL=1;

int main(int argc, char *argv[])
{
	int menuInput = 0;
	int menuShift = 0;
	int val = atoi (argv[1]);
	if( argc != NUM_VAL + 1 )
	{
		printf("Usage:\n");
		printf(" false Value. Write only one logic operator but not 0. \n");	
	}
	else
	{
		
		if(val == 0)
		{
			printf("Usage:\n");
			printf(" false Value. Write only one logic operator but not 0. \n");
		}
		else 
		{
			
			printf(" input is %d \n \n", val);
			printf("Select from the following options: \n");
			printf("1: Shift to the left \n");
			printf("2: Shift to the right \n");
			scanf("%d", &menuInput);
			//printf("%d \n", menuInput);
			{
				if ((menuInput < 1) || (menuInput > 2 ))
				{
				printf("Usage:\n");
				printf(" false Value. Write 1 or 2! \n");
				}
				else 
				{
				printf( " How many position do you want to shift? \n");
				scanf("%d", &menuShift);
				}
			}
			
			//int menuSelected = 
		}
		
	}
	if (menuInput == 1)
	{
		int oldval = val;
		val = val<<menuShift;
		printf("%d  bitweise nach ‘links’ geschoben ergibt %d. \n",oldval, val);
	}
	if (menuInput == 2)
	{
		int oldval = val;
		val = val>>menuShift;
		printf("%d  bitweise nach ‘rechts’ geschoben ergibt %d. \n",oldval, val);
	}

	




return 0;
}
