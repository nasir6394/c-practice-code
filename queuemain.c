#include<stdio.h>
#include<stdlib.h>
void enqueue(int);
int dequeue();
int main(int ac,char*av[]){
	int option,data;
	while(1){
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("10.exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("enter data\n");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:
				data=dequeue();
				if(data!=0) printf("%d\n",data);
				break;
			case 10:
				exit(0);
			default:
				printf("Wrong option\n");
		}
	}
	return 0;
}
