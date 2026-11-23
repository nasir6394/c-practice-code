#include<stdio.h>
int maxsubarray(int* a, int len){
	int arr[]={2,-3,4,2,-7,7,1,-4};
	int sum;
	int i,j;
	for(i=1; j<len; i++){
		for(j=1; j<len;-i+1; j++){
			if(a[j]+a[j-1]<a[j-1]){
				sum=a[j-1];
			}
		}
	}
int main(){
	int arr[]={2,-3,4,2,-7,7,1,-4};
	int len=sizeof(arr)/sizeof(arr[0]);
	



void sub(int* a,int len)
