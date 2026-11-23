#include<stdio.h>
#define AGE 20
int main(int argc,char*argv[]){
	printf("AGE:%d\n",AGE);
#if !defined(AGE)
	#define AGE 50
#endif
	printf("AGE:%d\n",AGE);
	return 0;
}

