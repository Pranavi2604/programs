#include <stdio.h>
#include <string.h>
# define max 50
int main(){
	char str[max];
	char *words[max];
	int count=0;
	printf("enter a line:");
	if(fgets(str,max,stdin)!=NULL){
		int l=strlen(str);
		if(l>0 && str[l-1]=='\n'){
			str[l-1]='\0';
			l--;
			}
		//	printf("%s\n",str);
			char *token=strtok(str," ");
			while(token !=NULL){
			 	words[count]=token;
				token=strtok(NULL," ");
				count++;
			}
			for(int i=count-1;i>=0;i--){
				printf("%s ",words[i]);
				}
				printf("\n");
		//		printf("%s",str);
				return 0;
			}
		else{
			return 1;
			}
			}
