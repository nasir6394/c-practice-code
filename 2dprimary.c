#include<stdio.h>
int main(){
	int td[][4]={{2,4,6,8},{1,3,5,7},{10,20,30,40},{11,22,33,44}};
	int rows=sizeof(td)/sizeof(td[0]);
	int cols=sizeof(td[0])/sizeof(td[0][0]);
	int i,j, sum=0;
	for(i=0; i<rows; i++){
		sum=sum+td[i][j];
		sum=sum+td[i][rows-i-1];
	}
	printf("Sum of primary diagonal =%d\n",sum);
	return 0;
}
