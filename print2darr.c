#include<stdio.h>
void print2DArray(int a[][4],int,int);
int main(){
	int td[][4]={{2,3,4,7},{5,8,9,6},{7,10,15,18}};
	int rows=sizeof(td)/sizeof(td[0]);
	int cols=sizeof(td[0])/sizeof(td[0][0]);
	print2DArray(td,rows,cols);
	return 0;
}
void print2DArray(int a[][4],int rows,int cols){
	int i,j;
	for(i=0; i<rows; i++){
		for(j=0; j<cols; j++){
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}
