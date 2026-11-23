#include<stdio.h>
int main(){
	int a[][3]={{3,5,2},{7,4,1}};
	int b[][2]={{1,5},{8,6},{2,4}};
	int c[2][2];
	int i,j,k;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			c[i][j]=0;
			for(k=0; k<3; k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
