#include<stdio.h>
int main(){
	int arr[]={3,7,5,4,18,9,2,6};
	int len=sizeof(arr)/sizeof(arr[0]);
	int data;
	printf("Enter a number to be searched\n");
	scanf("%d", &data);
	int i;
	for(i=0; i<len; i++){
		if(arr[i] == data){
			printf("%d found at %d\n",data);
			return 0;
		}
	}
	printf("%d not found\n",data);
	return 0;
}
