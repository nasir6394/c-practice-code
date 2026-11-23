#include<stdio.h>
int main(){
	int binarySearch(int a, int si, int li, int data){
		if(si<=li){
			int mid=(si+li)/2;
			if(a[mid]==data){
				return mid;
			}else if(a[mid]>data){
				return binarySearch(a,si,mid-1,data);
			}else{
				return binarySearch(a,mid+1,li,data);
			}
		}
		return -1;
}
int main(){
	int arr[]={3,4,5,8,10,12,35,47};
	int si=0;
	int li=sizeof(arr)/sizeof(arr(0
