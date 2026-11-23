#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node*prev;
	int data;
	struct Node*next;
}*head=NULL;
void create(int n){
	struct Node*temp,*p;
	int i;
	for(i=1;i<=n;i++){
		temp=(struct Node*)malloc(sizeof(struct Node));
		if(temp==NULL){
			printf("Could not create\n");
			return;
		}
		temp->prev=NULL;
		temp->next=NULL;
		printf("Enter data:");
		scanf("%d",&temp->data);
		if(head==NULL||i==1){
			head=temp;
		}else{
			p=head;
			while(p->next!=NULL)p=p->next;
			p->next=temp;
			temp->prev=p;
		}
	}
}
void traverse(){
	struct Node*p=head;
	if(p==NULL){
		printf("Empty list\n");
		return;
	}
	while(p->next!=NULL){
		printf("%d\t",p->data);
		p=p->next;
	}
	/*printf("%d\n",p->data);
	while(p->prev!=NULL){
		printf("%d\t",p->data);
		p=p->prev;
	}*/
	printf("%d\n",p->data);
}
void create(int);
void traverse();
void deleteNode(int);
int main(int argc,char*argv[]){
	int option, data, pos;
	while(1){
		printf("1.CreateList\n");
		printf("2.TraverseList\n");
		printf("3.DeleteNode\n");
		printf("10.Exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("Enter no of nodes:");
				scanf("%d",&data);
				create(data);
				break;
			case 2:
				traverse();
				break;
			case 3:
				printf("enter position number to delete: ");
				scanf("%d", &pos);
				deleteNode(pos);
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
/*void deleteNode(int pos){
	int option,data;
	struct Node*p;
	if(pos==1 && head==NULL){
		printf("EmptyList\n");
	}
		p->prev->next=p->next;
		if(p->next!=NULL){
			p->next->prev=p->prev;
		}else{
			head=p->next;
			if(p->next!=NULL){
				p->prev=NULL;
				p->next=NULL;
				free(p);
			}
		}
}*/
void deleteNode(int pos)
{
    struct Node *p = head;
    int i;

    if(p == NULL){
        printf("Empty List\n");
        return;
    }
    if(pos == 1){
        head = p->next;

        if(p->next!= NULL)
            p->next->prev =p->next;
	p->next=NULL;
        free(p);
    }else{
	int count=1;
	while(p->next!=NULL && count<pos){
		count++;
		p=p->next;
	}
	if(count==pos){
		p->prev->next=p->next;
		if(p->next!=NULL)
			p->next->prev=p->prev;
		p->prev=NULL;
		p->next=NULL;
		free(p);
	}else{
	printf("position does not exist\n");
	}
}
}
