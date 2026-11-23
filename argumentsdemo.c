#include<stdio.h>
#include<string.h>
int main(int argc, char*argv[]){
	if(argc==1){
		printf("Correct Usage: <cmd> <args..>\n");
		return 0;
	}
	int i;
	int sum=0;
	for(i=1; i<argc; i++){
		sum+=atoi(argv[i]);
	}
	float avg=(float)sum/(argc-1);
	printf("Avg=%f\n",avg);
	return 0;
}

