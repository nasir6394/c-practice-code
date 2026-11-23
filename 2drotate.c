#include<stdio.h>
int main(){
	int td[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int rows=sizeof(td)/sizeof(td[0]);
	int cols=sizeof(td[0])/sizeof(td[0][0]);
	int i,j,temp;
	for(i=0; i<rows; i++){
		for(j=0;j<i;j++){
			printf("%d\t",td[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rows;i++){
		for(j=0;j<i;j++){
			temp=td[i][j];
			td[i][j]=td[j][i];
			td[j][i]=temp;
		}
	}
	printf("%d\n", td[i][j]);
	return 0;
}
