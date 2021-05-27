#include<stdio.h>
#include "bitOps.h"


unsigned char data = 0xD3;

int main(void) {
	/*setBitNInByte(&data, 2);
	setBitNInByte(&data, 3);
	setBitNInByte(&data, 5);
	printf("%x\n", data);
	
	data= 0xD3;
	//printf("%x\n", data);
	clearBitNInByte(&data, 4);
	clearBitNInByte(&data, 6);
	clearBitNInByte(&data, 7);
	printf("%x\n", data);s
	*/
	//data= 0xD3;
	printf("%x\n", data);
	toggleBitNInByte(&data, 1);
	printf("%x\n", data);
	toggleBitNInByte(&data, 4);
	printf("%x\n", data);
	toggleBitNInByte(&data, 6);
	printf("%x\n", data);
	return 0;
	}
