#include <stdio.h>
#include <stdlib.h>
 
typedef struct inputdata {
 	long long timestamp;
	int pressure;
	char systemState;
	char alarmState;
	} inputdata_t;
	


int main()
{
	inputdata_t dataRecord;
	
	FILE *input = fopen("pressureSpike.bin", "rb");
	FILE *output = fopen("pressureSpike.csv", "w" );
	
	if (NULL == input) {
        	perror("File opening failed");
        	return EXIT_FAILURE;
        }
	else {
		while(!feof(input)){
			fread(&dataRecord.timestamp, 8, 1, input);
			fread(&dataRecord.pressure, 4, 1, input);
			fread(&dataRecord.systemState, 1, 1, input);
			fread(&dataRecord.alarmState, 1, 1, input);
			
			
			//char pump2 = &dataRecord.systemState>>3;
			//char pump1 = &dataRecord.systemState>>3;
			//char outletValve = &dataRecord.systemState>>3;
			//char inletValve = &dataRecord.systemState>>3;
			
			//fprintf(output, " %lld; %d; %d; %d\n",  dataRecord.timestamp, dataRecord.pressure, dataRecord.systemState, dataRecord.alarmState);
			
			printf(" %lld; %d; %d; %d;\n", dataRecord.timestamp, dataRecord.pressure, dataRecord.systemState, dataRecord.alarmState);

			
		}
	}
	fclose(input);
	fclose(output);

	return 0;
}	
    
 

