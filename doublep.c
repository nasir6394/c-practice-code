#include<stdio.h>
int main(){
	int x=10;
	int* p=&x;
	int** dp=&p;
	int*** tp=&dp;
	printf("x=%d\n",***tp);
	***tp=20;
	printf("x=%d\n",x);
	return 0;
}
