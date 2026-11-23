#include<stdio.h>
#include<stdlib.h>
static struct Node{
	int data;
	struct Node*next;
};
static struct Node* front=NULL;
static struct Node* rear=NULL;
void enqueue(int data){
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	if(temp==NULL){
		printf("Overflow\n");
		return ;
	}
	temp->data=data;
	temp->next=NULL;
	if((front==NULL)&&(rear==NULL)){
		front=temp;
		rear=temp;
	}else{
		rear->next=temp;
		rear=rear->next;
	}
}
int dequeue(){
	int x=-1;
	if(front==NULL){
		printf("Empty Queue\n");
	}else{
		x=front->data;
		struct Node*temp=front;
		front=front->next;
		temp->next=NULL;
		if(front==NULL){
			rear=NULL;
		}
		free(temp);
	}
	return x;
}
