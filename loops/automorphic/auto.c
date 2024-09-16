#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	printf("Enter a postive number:\n");
	scanf("%d",&a);
	int sq=a*a;
	int d=0;
	int temp=a;
	while(temp>0){
		d=d+1;
		temp=temp/10;
	} 
  int rev=0;
	temp=sq;
	while(d>0){
		int digit=temp%10;
		rev=rev*10+digit;
		d=d-1;
		temp=temp/10;
	} 
	int last=0;
	while(rev>0){
	int digit=rev%10;
	last=last*10+digit;
	rev=rev/10;
	}
	if(last==a){
		printf("automorphic number\n");
	}
	else{
	printf("Not automorphic\n");
	}
	return EXIT_SUCCESS;
}
		
