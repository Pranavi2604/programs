#include <stdio.h>
#include <string.h>
#define max 40
int main(){
	char str[max];
	printf("enter a string:\n");
	char *ptr=fgets(str,max,stdin);
	if(ptr!=NULL){
		int l=strlen(str);
		if(l>0 && str[l-1]=='\n'){
			str[l-1]='\0';
			}
		if(!fputs(str,stdout)){
			printf("error printing\n");
			return 2;
			}
			return 0;
       }
	else{
	 printf("error in reading\n");
	 return 1;
	 }
	}
	
