#include<stdio.h>
int add(int,int);
int diff(int,int);
int main(){
	int x,y;
	printf("Enter 2 numbers:");
	scanf("%d%d",&x,&y);
	int(*pf)(int,int);
	pf=add;
	printf("%d\n", pf(x,y));
	pf=&diff;
	printf("%d\n", pf(x,y));
	return 0;
}
int add(int x, int y){
	return x+y;
}
int diff(int x, int y){
	return (x>=y)?(x-y):(y-x);
}
