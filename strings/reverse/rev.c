#include <stdio.h>
#include <string.h>
#define max 50
int main(){
	char str[max];
	printf("enter a string:\n");
	if(fgets(str,max,stdin)!=NULL)
	{
		int len=strlen(str);
		if(len>0 && str[len-1]=='\n'){
			str[len-1]='\0';
			len--;
			}
		for(int i=0;i<len/2;i++){
			char c =str[i];
			str[i]=str[len-1-i];
			str[len-1-i]=c;
			}
		printf("%s",str);
        return 0;
		}
	else{
	  printf("error while reading");
	  return 1;
	  }
	}
