#include <stdio.h>

int main () 
{
	int start = 1;
	int end = 729;
	
	for( int i = start; i <= end; i=i*3 )
	{
		printf("%d\n" , i );
		{
		int start = 20;
		int end = 17;
		for(int i = start; i >= end; i--)
			{
			printf("%d\n" ,i);
			}
		}
	}
	
	
	return 0;
}

