#include<stdio.h>
int main(){
	int x=10,y=20;
	printf("before of if\n");
	if(x<y)
		printf("Inside if\n");
		printf("Leaving if\n");
	else
		printf("Inside if\n");
		printf("Leaving else\n");
	
	printf("Outside of if-else\n");
	return 0;
}	
