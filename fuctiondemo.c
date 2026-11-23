#include<stdio.h>
int add(int,int);
int main(){
	int x,y;
	printf("Enter 2 Integers:\n");
	scanf("%d%d", &x,&y);
	int result =add(x,y);
	printf("Result=%d\n", result);
	return 0;
}
int add(int a, int b){
	int c;
	c=a+b;
	return c;
}
