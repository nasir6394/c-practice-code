#include<stdio.h>
int main(){
	int i;
	for(i=0; i<10;){
		if(5==i)
			continue;
		
		printf("i=%d\n",i);
		i++;
	}
	return 0;
}
