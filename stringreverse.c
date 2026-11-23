#include<stdio.h>
#include<string.h>
void reverseString(char*);
int main(){
	char name[]="Lucknow";
	printf("%s\n",name);
	reverseString(name);
	printf("%s\n",name);
	return 0;
}
void reverseString(char* str){
	int i=0;
	int j=strlen(str)-1;
	char temp;
	while(i<j){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}

}
