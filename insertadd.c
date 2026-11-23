#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	int pos;
	struct Node* next;
}*head=NULL;
void insertNode(int data,int pos){
	int count,pos;
	struct Node* temp, *p;
	temp=(struct Node*)malloc(sizeof(struct Node));
	if(pos==1){
		temp->next=head;
		head=temp;
	}else{
		printf("Enter the position\n");
		scanf("%d",&pos);
		pos=3; p=head; count=1;
		while(p->next!=NULL&&count<pos-1){
			p=p->next;
			count++;
		}
		if(count==pos-1){
			temp->next=p->next;
			p->next=temp;
		}else{
			printf("Position does not exit\n");
		}
	}
}
void insertNode(int data,int pos);
int main(int argc,char* argv[]){
	int data,pos;
	while(1){
		printf("1. CreateList\n");

