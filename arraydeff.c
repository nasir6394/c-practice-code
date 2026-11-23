#include<stdio.h>
int main(){
	int arr[]={2,3,7,9,5,8};
	int*p=&arr[0];
	printf("%d\n",*++p);
	printf("%d\n",*p++);
	printf("%d\n",++*p);
	printf("%d\n",*p++);
	printf("%d\n", *p);
	return 0;
}
