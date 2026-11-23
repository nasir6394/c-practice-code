#include<stdio.h>
int main(int argc,char*argv[]){
	if(argc==1){
		printf("Correct Usage: command<file_name>\n");
		return 0;
	}
	FILE* fp=fopen(argv[1],"w");
	if(fp==NULL){
		printf("Could not open file\n");
		return 1;
	}
	int data;
	while(data=getchar()!='#'){
		fputc(data,fp);
	}
	fclose(fp);
	return 0;
}
