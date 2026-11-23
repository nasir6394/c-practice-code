#include<stdio.h>
int main(){
	unsigned int x;
	printf("enter a positive number\n");
	scanf("%d" , &x);
	if((x &(x-1))==0){
		int pos=0;
		while(x!=0){
			pos++;
			x=x>>1;
		}
		if((pos&1)==1){
			printf("Number is in power of 4\n");
		}else{
			printf("Not is in power of 4\n");
		}
	}else{
		printf("Not is in power of 4\n");
	}
	return 0;
}
