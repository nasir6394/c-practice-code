#include<stdio.h>
int main(){
	int arr[]={3,7,5,4,18,9,2,6};
	int len=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0; i<len; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	int j=len-1;
	int temp;
	i=0;
	while(i<j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
	for(i=0;i<len; i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}
