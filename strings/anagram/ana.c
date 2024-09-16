#include <stdio.h>
#include <string.h>
#define max 50
int main() {
  char str1[max];
  char str2[max];
  printf("enter a string:");
  if(fgets(str1,max,stdin) ==NULL){
      return 1;
      }
else if(fgets(str2,max,stdin)==NULL){
     return 1;
}
else{
     int l1=strlen(str1);
      if(l1>0 && str1[l1-1]=='\n'){
          str1[l1-1]='\0';
          l1--;
      } 
      int l2=strlen(str2);
      if(l2>0 && str2[l2-1]=='\n'){
          str2[l2-1]='\0';
          l2--;
      } 
      if(l1==l2){
         int  is_anagram=1;
      for(int i=0;i<l1;i++){
          char c=str1[i];
          int flag=0;
          for(int j=0;j<l2;j++){
              if(c==str2[j]){
                  str2[j]=' ';
                  flag=1;
                  break;
              }
          }
          if (flag==0){
              is_anagram=0;
              break;
          }
          }
          if(is_anagram==0){
              printf("not anagram");
          }
          else{
              printf("yes anagram");
          }
      }
 
return 0;
}
} 
