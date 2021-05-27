#include<stdio.h>
#include<stdlib.h>
#include "bitOps.h"

void setBitNInByte( unsigned char* data, unsigned char bitN)
	{
	*data |= 1 << bitN ;
	}

void clearBitNInByte( unsigned char* data, unsigned char bitN )
	{
	*data &= ~(1 << bitN);
	}

void toggleBitNInByte( unsigned char* data, unsigned char bitN )
	{
	char bitX = *data;
	if ((bitX |= 1 << bitN) == *data)
		{
		*data |= ~(1 << bitN);
		}
	else
		{
		*data |= 1 << bitN;
		}
	}


/*unsigned char BitNIsSet(unsigned char data)
	{
	if (&data |= 1 << bitN) == *data)
		{
		return 1;
		}
	else
		{
		return 0;
		}
	}*/
