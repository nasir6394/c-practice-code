#include<stdio.h>
#include<string.h>
void Frequencybyhash(char* str){
	int Frequencies[128]={0};
	int i;
	for(i=0; i<strlen(str); i++){
		if(str[i]==' ')continue;
		Frequencies[str[i]]++;
	}
	for(i=0; i<128; i++){
		if(Frequencies[i]>0){
			printf("%c---%d\n",(char)i, Frequencies[i]);
		}
	}
}
void Frequencybyhash(char* str);
int main(){
	char name[128];
	printf("Enter the String:\n");
	scanf("%[^\n]s",name);
	Frequencybyhash(name);
	return 0;
}
