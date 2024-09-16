#include <stdio.h>
#include <string.h>
#define max 50
int main(){
    char str[max][max];
    char s[max];
    char c;
    int n;
    printf("enter number of lines u want to enter\n");
    scanf("%d",&n);
    while(getchar()!='\n');
 
     for(int i=0;i<n;i++){
         printf("enter i line :\n");
        fgets(str[i],max,stdin);
        int len=strlen(str[i]);
        if(len>0  && str[i][len-1]=='\n'){
            str[i][len-1]='\0';
        }
     }
     printf("search string:\n");
        fgets(s,max,stdin);
        int l1=strlen(s);
        if(l1>0  && s[l1-1]=='\n'){
            s[l1-1]='\0';
            l1--;
        }
        printf("enter the character u want to search");
        scanf("%c",&c);
        while (getchar() != '\n');
        int cp=0;
        for(int i=0;i<n;i++){
            int l=strlen(str[i]);
            for(int j=0;j<l;j++){
                 if(c==str[i][j]){
                   cp=cp+j;
            }
        }
        }
        printf("%d\n",cp);
        int wp=0;
        for(int i=0;i<n;i++){
             int l=strlen(str[i]);
            for(int j=0;j<l;j++){
                 int a=0;
                 int f=0;
            for(int k=j;k<j+l1;k++){
                if(str[i][k]!=s[a]){
                    f=1;
                    break;
                }
                a++;
            }
            if(f==0){
                wp=wp+j;
            }
        }
        }
        printf("%d\n",wp);
        return 0;
}
