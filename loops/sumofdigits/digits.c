#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	int sum=0;
	printf("enter a positive number:");
	scanf("%d",&num);
	while(num>0){
		sum=sum+(num%10);
		num=num/10;
		}
	printf("sum of digits of given number is %d\n",sum);
	return EXIT_SUCCESS;
	}
	

