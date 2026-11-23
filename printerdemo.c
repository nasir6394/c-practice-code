#include<stdio.h>
int mian (){
	int age=20;
	int* p;
	p=&age;
	printf("%d\n", *p);
	*p=21;
	printf("%d\n", age);
	return 0;
}
