#include<stdio.h>
#include<string.h>
int main(){
	char* s1="Lucknow Junction EAST";
	char* s2="unct";
	char* s3=strstr(s1,s2);
	if(s3!=NULL){
		printf("%s\n",s3);
	}else{
		printf("Not found\n");
	}
	return 0;
}
