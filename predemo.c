#include<stdio.h>
int main(int argc,char*argv[]){
	printf("File:%s\n",__FILE__);
	printf("Line:%d\n",__LINE__);
	printf("Date:%s\n",__DATE__);
	printf("Time:%s\n",__TIME__);
	printf("ISO:%d\n",__STDC__);
	return 0;
}
