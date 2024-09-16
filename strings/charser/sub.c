#include <stdio.h>
#include <string.h>
#define max 50
int main(){
	char str[max];
	printf("enter string:\n");
	if(fgets(str,max,stdin)!=NULL){
		int len=strlen(str);
		if(str[len-1]=='\n'){
			str[len-1]='\0';
		}
		char *ptr=strchr(str,'h');
		if (ptr!=NULL){
			int p=ptr-str;
			printf("found at %d",p);
		}
		else{
		printf("not found");
		}
		return 0;
		}
	else{
	printf("error reading using fgets");
	return 1;
	}

}

	 
