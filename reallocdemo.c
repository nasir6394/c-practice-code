#include<stdio.h>
#include<stdlib.h>
int main(){
	int* p=(int*)malloc(sizeof(int));
	*p=20;
	free(p);
	p=NULL;
	if(p!=NULL){
		printf("%d\n", *p);
	}
	return 0;
}
