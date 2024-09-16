#include <stdio.h>
#include <string.h>
#define max 40
int main(){
	char str[max];
	char cstr[max];
	printf("enter string:\n");
	if(fgets(str,max,stdin)!=NULL){
	 	int l=strlen(str);
		if(l>0 && str[l-1]=='\n'){
			str[l-1]='\0';
			}
		strncpy(cstr,str,l+1);
		printf("%s\n",cstr);
		return 0;
		}
	else{
		return 0;
		}
	}
	
