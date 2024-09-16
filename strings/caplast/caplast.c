#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 100
int main() {
    char str[max];
    char *words[max];
    int count=0;
	char cpy[max]="";
    if(fgets(str,max,stdin)!=NULL){
        int l=strlen(str);
        if(l>0 && str[l-1]=='\n'){
            str[l-1]='\0';
            l--;
        }
        char *token=strtok(str," ");
        while(token!=NULL){
            words[count]=token;
            count++;
            token=strtok(NULL," ");
         }
		 for(int i=0;i<count;i++){
		 	int len=strlen(words[i]);
		    words[i][len-1]=toupper(words[i][len-1]);
			strcat(cpy,words[i]);
			strcat(cpy," ");
			}
			if(cpy[strlen(cpy)-1]==' '){
				cpy[strlen(cpy)-1]='\0';
				}
			printf("%s",cpy);
			}
			}
		 	
