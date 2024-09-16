#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	int b;
	int c;
	printf("enter 3 numbers :\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c)){
		printf("a is max\n");
	}
    else if((b>c)&&(b>a)){
		printf("b is max\n");
	}
    else if((c>a)&&(c>b)){
		printf("c is max\n");
	}
	else{
	printf("all three are equal\n");
	}
	return EXIT_SUCCESS;
}	
