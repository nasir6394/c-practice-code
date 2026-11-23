#include<stdio.h>
int main(int argc,char*argv[]){
	if(argc<3){
	printf("Correct Usage:command<read.from>write_to>\n");
	return 0;
	}
	FILE*fpr=fopen(argv[1],"r");
	FILE*fpw=fopen(argv[2],"w");
	if((fpr==NULL)||(fpw==NULL)){
		printf("Could not proceed\n");
		return 0;
	}
	int data;
	while((data=fgetc(fpr))!=EOF){
		fputc(data,fpw);
	}
	fclose(fpr);
	fclose(fpw);
	return 0;
}
