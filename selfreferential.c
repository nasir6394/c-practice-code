#include<stdio.h>
int main(){
	struct student{
		char* name;
		int age;
		struct student* sp;
	};
	struct student first;
	struct student second;
	struct student *head = &first;
	first.name="Nasir Hussain";
	first.age=20;
	first.sp=&second;
	second.name="Abrar Alam";
	second.age=30;
	second.sp=NULL;
	printf("%d\n", head->age);
	printf("%d\n", head->sp->age);
	return 0;
}
