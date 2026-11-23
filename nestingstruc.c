#include<stdio.h>
struct student{
	char* name;
	struct address{
		char* city;
		int pin;
	}*p;
};
int main(int argc, char*argv[]){
	struct student stu;
	printf("%d\n",(int)sizeof(stu));
	stu.name="Nasir Hussain";
	stu.p->city="Lucknow";
	stu.p->pin=274401;
	printf("Name=%s\n",stu.name);
	printf("City=%s\n",stu.p->city);
	printf("Pin=%d\n",stu.p->pin);
	return 0;
}
