#include<stdio.h>
int main(){
	int arr[]={3,7,5,4,18,9,2,6};
	int max = arr[0];
	int smax = arr[0];
	int i;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(i=1; i<len; i++){
		if(arr[i]>max){
			smax = max;
			max = arr[i];
		}else if(arr[i]>smax){
			smax = arr[i];
		}
	}
	printf("Second max in array =%d\n",smax);
	return 0;
}
