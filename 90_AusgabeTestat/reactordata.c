#include <stdio.h>
#include <stdlib.h>
 
struct {
 	long long timestamp;
	int pressure;
	char systemState;
	char alarmState;
	} dataRecord;
	

int main()
{
	
	/*char readDate[] = "pressureSpike.bin";
	char writeOnly[] = "reactor_Data.csv";
	FILE *binp;
	FILE *csv;*/
	
	
	//csv = fopen(writeOnly, "w");
	
	
	FILE *input = fopen("pressureSpike.bin", "rb");
	if (NULL == input) {
        	perror("File opening failed");
        	return EXIT_FAILURE;
        }
	else {
		//while (fread(&dataRecord, sizeof(dataRecord), 1, input) == 1) {
		while(!feof(input)){
		fread(&reactor_data.timeStamp, sizeof(long long), 1, input);
		fread(&reactor_data.pressure, sizeof(int), 1, input);
		fread(&reactor_data.systemState, sizeof(char), 1, input);
		fread(&reactor_data.alarmState, sizeof(char), 1, input);
		
		
		
			printf(" %lld\t", dataRecord.timestamp);
			printf(" %d\t", dataRecord.pressure);
			printf(" %d\t", dataRecord.systemState);
			printf(" %d\n", dataRecord.alarmState);
		}
	}
	
	
  /*  int c;								// note: int, not char, required to handle EOF
    while ((c = fgetc(binp)) != EOF) { 	// standard C I/O file reading loop
       putchar(c);
       
       printf("%lld\n", reactorData.timestamp);
       /*
       fread(&reactorData.timestamp, 8, 1, binp);
       fread(&reactorData.pressure, 4, 1, binp);
       fread(&reactorData.systemState, 1, 1, binp);
       fread(&reactorData.alarmState, 1, 1, binp);
       printf( " %lld; %d; %d; %d\n",  reactorData.timestamp, reactorData.pressure, reactorData.systemState, reactorData.alarmState);
       */
	return 0;
}	
    
 

