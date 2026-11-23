#include<stdio.h>
int main(){
	int age=20;
	int* q;
	q=&age;
	printf("%p\n", q);
	int k=&age;
	printf("%x\n", k);
	q++;
	k++;
	printf("%p\n",q);
	printf("%x\n",k);
	return 0;
}
