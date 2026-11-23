#include<stdio.h>
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{3,6,9},{2,4,6},{10,20,30}};
	int c[3][3];
	int temp;
	int i,j;
	int rows=sizeof(a)/sizeof(a[0]);
	int cols=sizeof(a[0])/sizeof(a[0][0]);
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			c[i][j]=a[i][j] + b[i][j];
		}
	}
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			temp=a[i][j];
			a[i][j]=b[i][j];
			b[i][j]=temp;
		}
	}
	printf("matrixc(a+b):\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d ", c[i][j]);
		}
	printf("\n");
	}
	return 0;
}
