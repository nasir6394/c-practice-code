#include<stdio.h>
int main(){
	int mtx[4][4]={{1,3,5,7},{2,4,6,8},{10,20,30,40,},{11,22,33,44}};
	int rows = sizeof(mtx)/sizeof(mtx[0]);
	int cols = sizeof(mtx[0])/sizeof(mtx[0][0]);
	int sum = 0;
	int i,j;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			sum+=mtx[i][j];
		}
	}
	printf("Sum of all elements=%d\n",sum);
	return 0;
}
