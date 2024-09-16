#include <stdio.h>
#define max 5
int main(){
	int a[max];
	int x;
	int flag=0;
	printf("enter 5  elemnts to store in array: \n");
	for(int i=0;i<max;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the element to search:\n");
	scanf("%d",&x); 
	for(int i=0;i<max;i++){
		if (a[i]==x){
			printf("%d\n",i);
			flag=1;
		}
	} 
	if(flag==0){
	printf("Not found\n");
	}
	return 0;
	}

