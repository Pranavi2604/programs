#include <stdio.h>
#include <string.h>
#define max 100
int main() {
    char str[max];
    char *words[max];
    int count=0;
    if(fgets(str,max,stdin)!=NULL){
        int l=strlen(str);
        if(l>0 && str[l-1]=='\n'){
            str[l-1]='\0';
            l--;
        }
        char *token=strtok(str,"|");
        while(token!=NULL){
            words[count]=token;
            count++;
            token=strtok(NULL,"|");
        }
        for(int i=0;i<count/2;i++){
            char *temp=words[i];
            words[i]=words[count-1-i];
            words[count-1-i]=temp;
        }
                for(int i=0;i<count;i++){
                  printf("%s ",words[i]);
                }
                }
            }
