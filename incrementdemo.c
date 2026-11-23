#include<stdio.h>
int main(){
	int x=10;
	int y=10;
	int z=++x;
	int a=y++;
	printf("x=%d\t y=%d\n",x,y);
	printf("z=%d\t a=%d\n",z,a);
	return 0;
}
