#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	if (a%2==0){
		printf("Number is even\n");
		} 
	else{
		printf("Number is odd\n");
		}
	return EXIT_SUCCESS;
	}

