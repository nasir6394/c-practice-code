#include<stdio.h>
#include<string.h>
void printfrequency(char* str);
int main(){
	char s[]="Lucknow Junction";
	printfrequency(s);
	return 0;
}

void printfrequency(char* str){
	int count=0;
	int i,j;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' ')continue;
		count=0;
		for(j=0;j<strlen(str);j++){
			if(str[i]==str[j]){
				if(j<i){
					break;
				}
				count++;
			}
		}
		if(count>0){
			printf("%c---%d\n", str[i],count);
		}
	}
}
