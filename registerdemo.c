#include<stdio.h>
int main(){
	register int x=5;
	int i;
	for(i=0; i<10; i++){
		printf("x=%d\n",x);
		x++;
	}
	return 0;
}
