#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* next;
}*head=NULL;
void createList(int);
void traverse();
void insertNode(int data,int pos);
int main(int argc,char*argv[]){
	int option, data,position,n;
	while(1){
		printf("1.CreateList\n");
		printf("2.TraverseList\n");
		printf("3.InsertNode\n");
		printf("10.Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter no of nodes:");
				scanf("%d",&n);
				createList(n);
				break;
			case 2:
				traverse();
				break;
			case 3:
				printf("Enter data\n");
				scanf("%d",&data);
				printf("Enter location\n");
				scanf("%d",&position);
				insertNode(data,position);
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
void createList(int n){
	struct Node*temp,*p;
	int data,i;
	for(i=1;i<=n;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		temp->next=temp;
		printf("Enter data\n");
		scanf("%d",&temp->data);
		if(head==NULL){
			head=temp;
		}else{
			p=head;
			while(p->next!=head)p=p->next;
			p->next=temp;
			p=p->next;
			p->next=head;
		}
	}
}
void traverse(){
	struct Node* p=head;
	if(p==NULL){
		printf("Empty List\n");
	}else{
		do{
			printf("%d\t",p->data);
			p=p->next;
		}while(p!=head);
		printf("\n");
	}
}
/*void insertNode(int data,int pos){
	struct Node*temp, *p;
	int count=1;
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
}*/
void insertNode(int data,int pos){
	struct Node*temp,*p=head,*q=head;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data = data;
	temp->next=temp;
	if(pos==1){
		while((p!=NULL)&&(p->next!=head)){
			p=p->next;
		}
		if(p==NULL){
			head=temp;
		}else{
			temp->next=head;
			head=temp;
			p->next=head;
		}
	}else{
		int count=1;
		while(p->next!=head){
			p=p->next;
		}
		while((q->next!=head)&&(count<pos-1)){
			q=q->next;
			count++;
		}
		if(count==(pos-1)){
			temp->next=q->next;
			q->next=temp;
		}else{
			printf("Position does not exist\n");
		}
	}
}
