#include<stdio.h>
int main(){
	int td[][5]={{1,3,5,7,9},{2,4,6,8,10},{11,22,33,44,55}};
	td[1][2]=15;
	int x=td[0][3];
	int i,j;
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d\t", i[td][j]);
		}
	printf("\n");
	}
	return 0;
}
