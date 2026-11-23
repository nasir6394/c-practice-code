#include<stdio.h>
#include<stdlib.h>
int main(){
	int* p=(int*)calloc(5,sizeof(int));
	int i;
	for(i=0; i<5; i++){
		p[i]=i*i;
	}
	for(i=0; i<5; i++){
		printf("%d\t",*(p+i));
	}
	printf("\n");
	return 0;
}
