#include<stdio.h>
int main(){
	unsigned int x=3333333333333333;
	if((x&(x-1))==0){
		printf("x is in power of 2\n");
	}else{
		printf("x is not in power of 2\n");
	}
	return 0;
}
