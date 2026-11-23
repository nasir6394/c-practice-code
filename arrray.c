#include<stdio.h>
void printer(int* ,int);
int main(){
	int arr[]={3,5,7,9,6,4};
	int length=sizeof(arr)/sizeof(arr[0]);
	printer(arr,length);
	return 0;
}
void printer(int*a ,int length){
	int i;
	for(i=0; i<length; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
