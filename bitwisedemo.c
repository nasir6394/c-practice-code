#include<stdio.h>
int main(){
	unsigned int x= 10;
	if((x&1)==1){
		printf("Number is odd\n");
	}else{
		printf("Number is even\n");
	}
	return 0;
}
