#include<stdio.h>
int main(){
	int x=10;
	int y=15;
	int a=x<y;
	int b=x>y;
	int c=x==y;
	int d=x!=y;
	int f=x>=y;
	int g=x<=y;
	printf("%d\t%d\t%d\t%d\t%d\t%d\n",a,b,c,d,f,g);
	return 0;
}
