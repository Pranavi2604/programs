#include <stdio.h>
#define max 50
#include <string.h>
int main(){
	char str1[max];
	char str2[max];
	printf("enter a 1st string:\n");
	if(fgets(str1,max,stdin)==NULL){
		return 1;
		}
	else if(fgets(str2,max,stdin)==NULL){
		return 1;
		}
	else{
		int l1=strlen(str1);
		int l2=strlen(str2);
		if(l1>0 && str1[l1-1]=='\n'){
			str1[l1-1]='\0';
			l1--;
			}
		if(l2>0 && str2[l2-1]=='\n'){
			str2[l2-1]='\0';
			l2--;
			} 
		 strncat(str1,str2,l2+1);
		 printf("%s",str1);
		return 0;
		}
	}
