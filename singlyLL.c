#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
}*head=NULL;
void createList(int);
void traverseList();
void insertNode(int data,int pos);
int main(int argc,char*argv[]){
	int option, no_of_nodes;
	while(1){
		printf("1.CreateList\n");
		printf("2.TraverseList\n");
		printf("3.
		printf("10.Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter no of nodes:");
				scanf("%d",&no_of_nodes);
				createList(no_of_nodes);
				break;
			case 2:
				traverseList();
				break;
			case 10:
				exit(0);
			default:
				printf("Wrong option\n");
				break;
		}
	}
	return 0;
}
void createList(int no_of_nodes){
	struct Node* temp, *p;
	int data,i;
	for(i=1;i<=no_of_nodes;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->next=NULL;
		printf("Enter data\n");
		scanf("%d",&temp->data);
		if(head==NULL){
			head=temp;
		}else{
			p=head;
			while(p->next!=NULL)p=p->next;
			p->next=temp;
		}
	}
}
void traverseList(){
	struct Node*p=head;
	while(p!=NULL){
		printf("%d\t",p->data);
		p=p->next;
	}
	printf("\n");
}
void insertNode(int data,int pos){
	struct Node*temp,*p;
	int count=0;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=NULL;
	if(pos==1){
		temp->next=head;
		head=temp;
	}else{
		p=head;
		count=1;
		while((p->next!=NULL)&&(count<pos-1)){
			p=p->next;
			count++;
		}
		if(count==(pos-1)){
			temp->next=p->next;
			p->next=temp;
		}else{
			printf("Position does not exit\n");
		}
	}
}
