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
        int vis[max]={0};
        for(int i=0;i<count;i++){
            if(vis[i]==0){
                char *p=words[i];
                int c=0;
            for(int j=0;j<count;j++){
                if(strcmp(p,words[j])==0){
                    vis[j]=1;
                    c++;
                }
            }
                if(c==1){
                    printf("%s\n",words[i]);
                }
            }
            } 
        }
    }

 
