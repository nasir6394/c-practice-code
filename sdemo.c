#include<stdio.h>
void printer(); 
static int age=1;
int main();
	printf("Age=%d\n",age);	
	printer();
	printer();
	
	return 0;
}
void printer(){
 	
	printf("Age=%d\n",age);
	age++;
}
