#include<stdio.h>
int main (){
	int x= 10;
	static int y;
	y = x;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
}
