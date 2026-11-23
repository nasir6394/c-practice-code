#include<stdio.h>
#include<string.h>
int main(){
	char name[]="Lucknow Junction";
	int ch;
	printf("Enter your character:");
	scanf("%d\n",&ch);
	char*addrof(char*s,char ch){
		printf("%s\n",&ch);
	}
	return 0;
}
int indexof(char*s, char ch){
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]==ch){
			return i;
		}
	}
	return -1;
}
