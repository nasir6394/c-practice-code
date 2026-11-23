#include<stdio.h>
void display();
int main(){
	printf("Inside main\n");
	goto ab;
	display();
	printf("End of main\n");
	return 0;
}
void display(){
	ab:
	printf("Display called\n");
}
