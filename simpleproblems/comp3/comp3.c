#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int b;
	int c;
	printf("enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("max num is %d\n",(a>b)?((a>c) ? a:c):((b>c)?b:c));
	return EXIT_SUCCESS;
	}

