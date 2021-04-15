#include<stdio.h>
#include<stdlib.h>

int R = 6;

float ComputeCircleArea(int a )
{
	return a*a*3.1415926535;
}

int main()
{
	printf( "Die Fläche vom Kreis mit Radius %d ist %.3f\n", R, ComputeCircleArea(R) );

	return 0;
}

	
