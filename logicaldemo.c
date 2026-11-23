#include<stdio.h>
int main(){
	int x=10;
	int y=20;
	int z=30;
	int a=(++x<++y)&&(++y<++z);
	printf("a=%d\n",a);
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	return 0;
}
