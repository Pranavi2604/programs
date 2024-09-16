#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int b;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	printf("max number is %d \n",a>b?a:b);
	return EXIT_SUCCESS;
}

