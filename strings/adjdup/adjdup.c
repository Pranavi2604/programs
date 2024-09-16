#include <stdio.h>
#include <string.h>
#define max 100
int main() {
    char str[max];
    char *words[max];
    int count=0;
	char cpy[max];
    if(fgets(str,max,stdin)!=NULL){
        int l=strlen(str);
        if(l>0 && str[l-1]=='\n'){
            str[l-1]='\0';
            l--;
        }
		int c=0;
     for(int i=0;i<l;i++){

	   	if(i==l-1||str[i]!=str[i+1]){
			cpy[c]=str[i];
			c++;
			}
	
	     
		}
		printf("%s",cpy);
		}
}
