#include <stdio.h>
#include <stdlib.h>

const int NUM_VALUES = 3;

int main(int argc, char *argv[] )
{
	// falls NICHT 4 Argumente erhalten, dann --> Block 7 bis 10
	if( argc != NUM_VALUES + 1 ) // +1 because
	{
	// input not valid
		printf("Usage:\n");
		printf("logicOperators Input 1 Input 2 Input 3\n");
	}
	else 
	{ 	// input is valid --> genau 1 + 3 Argumente erhalten
		int val1 = atoi(argv[1]);		// argue to int umwandeln
		int val2 = atoi(argv[2]);
		int val3 = atoi(argv[3]);
		int sum = 0;
		float average = 0.0f;
		
		printf("%d, %d, %d\n", val1, val2, val3);
		
		if ( !(val1 >= 0) || !(val2 >= 0) || !(val3 >= 0) )
		{
			//Fehlerfall
			printf(" All inputs must be strictly greater than zero.\n");
		}
		else
		{
			// find the greatest
			if( val1 >= val2 && val1 >= val3 )
			{
				// val1 is the greatest
				printf("%d isch di grössti Zahl\n", val1);
							
			}
			else if( val2 >= val1 && val2 >= val3 )
			{
				// val2 is the greatest
				printf("%d isch di grössti Zahl\n", val2);
			}
			else
			{
				// val3 is the greatest
				printf("%d isch di grössti Zahl\n", val3);
			}
			
			// find the smallest
			if( val1 <= val2 && val1 <= val3 )
			{
				// val1 is the smallest
				printf("%d is the smallest\n", val1);
							
			}
			else if( val2 <= val1 && val2 <= val3 )
			{
				// val2 is the smallest
				printf("%d is the smallest\n", val2);
			}
			else
			{
				// val3 is the smallest
				printf("%d is the smallest\n", val3);
			}
			
			// make the sum
			sum =( val1 + val2 + val3 );
			printf("%d is the beautiful sum\n", sum);
			
			// make the average
			average = (float)( sum/NUM_VALUES);
			printf("%f isch dr Durchschnitt vo denä Zahle\n", average);
			
			
			
		
		}
	
		
	}

	
#if 0	// auskommentieren mit Präprozessor
	if(
	
		printf("Number of input arguments: %d\n", argc ); // Anzahl args. printen
		
		// die drei Elemente in der For-Loop Deklaration
		/ ----------------------------------------------
		// nimm eine int-variable i und starte mit 0.
		// führe folgdenden Code aus, solange i < argc
		// inkrementiere i bei jedem Durchlauf um 1 (++).
	
		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s\n", i, argv[i]);
			
			// argv:  	- ./logicOperators
			//		- 23
			//		- 99
		}
	}

#endif

		return 0;
}



/*
	double e = 2.71828182;
	
	printf("%0.15f", e;
*/
