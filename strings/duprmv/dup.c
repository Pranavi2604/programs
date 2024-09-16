#include <stdio.h>
#include <string.h>
#define max 50
int main() {
  char str[max];
  int vis[max]={0};
  printf("enter a string:");
  if(fgets(str,max,stdin) !=NULL){
      int l=strlen(str);
      if(l>0 && str[l-1]=='\n'){
          str[l-1]='\0';
          l--;
      } 

      for(int i =0;i<l;i++){
          if(str[i]==' '){
              printf(" ");
          }
          if(vis[i]==0 && str[i]!=' '){
              char c=str[i];
              for(int j=0;j<l;j++){
                  if(str[j]==c){
                      vis[j]=1;
                  }
              } 
              printf("%c",c);
          }
      }
      return 0;
  }
  else{
      return 1;
  }
}
