#include<stdio.h>
#include<stdlib.h>

int n = 6;
int k = 2;

int fakultaet(int a )
{
	if(a == 0 )
		return 1;
		
	else
		return (a * fakultaet(a-1));
}

int main()
{
	printf( "%d tief %d ist %d\n ", n, k, fakultaet(n)/(fakultaet(k)*fakultaet(n-k)));

	return 0;
}

	
