#include<stdio.h>
int main(int argc,char*argv[]){
	typedef struct{
		char* name;
		int age;
		char gender;
	}student;
	student *sp;
	student stu;
	sp=&stu;
	stu.name="Sumit Sehgal";
	sp->age=40;
	stu.gender='M';
	printf("Name:%s\n",sp->name);
	printf("Age:%d\n",stu.age);
	printf("Gender:%c\n",sp->gender);
	return 0;
}
