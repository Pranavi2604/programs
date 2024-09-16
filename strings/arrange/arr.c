#include <stdio.h>
#include <string.h>
#define max 50
int main() {
  char str[max];
  char *words[max];
  int count=0;
  printf("enter a string:");
  if(fgets(str,max,stdin) ==NULL){
      return 1;
      }
else{
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
      for(int i=0;i<count-1;i++){
          for(int j=i+1;j<count;j++){
              if(strcmp(words[i],words[j])>0){
                  char *temp=words[i];
                  words[i]=words[j];
                  words[j]=temp;
              }
          }
      }
      for(int i=0;i<count;i++){
          printf("%s ",words[i]);
      }
return 0;
}
}
