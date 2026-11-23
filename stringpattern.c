#include<stdio.h>
#include<string.h>
int naiveSearch(char* str, char* pattern);
int main(){
	char str[]="Lucknow Junction East";
	char pattern[]="ncti";
	char name=naiveSearch(str,pattern);
	printf("your character is found%d\n",(char)name);
	return 0;
}
int naiveSearch(char* str, char* pattern){
	int lens=strlen(str);
	int lenp=strlen(pattern);
	int i,j;
	for(i=0; i<=(lens-lenp); i++){
		if(pattern[0]==str[i]){
		for(j=1; j<lenp; j++){
			if(str[i+j]!=pattern[j])break;
		}
		if(j==lenp)return i;
		}
	}
	return -1;
}

