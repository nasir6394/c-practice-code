#include<stdio.h>
int main(){
	unsigned int x=32;
	int count=0;
	while(x!=0){
		if((x&1)==1){
			count++;
		}
		x=x>>1;
	}
	if(count==1){
		printf("x is in power of 2\n");
	}else{
		printf("x is not in power of 2\n");
	}
	return 0;
}
